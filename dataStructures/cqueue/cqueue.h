#include <iostream>

#include "../../gstorage.h"
#include "../../util.h"

#pragma once

generic
class cqueue{
    private:
        unsigned int capacity;
        T *queue;
        int headIndex;
        int tailIndex;

        int nextIndex(int index){
            return (index + 1) % (capacity + 1);
        }

    public:
        cqueue(unsigned int capacity){
            this->capacity = capacity;
            queue = new T[capacity + 1];

            headIndex = 0;
            tailIndex = 0;
        }

        bool empty(){
            return headIndex == tailIndex;
        }

        bool full(){
            return nextIndex(tailIndex) == headIndex;
        }

        void insert(T data){

            if(nextIndex(tailIndex) == headIndex)
                throw std::system_error(std::make_error_code(std::errc::result_out_of_range), "Queue is full");
            
            tailIndex = nextIndex(tailIndex);
            queue[tailIndex] = data;
        
        }

        T remove(){
            if(empty())
                throw std::system_error(std::make_error_code(std::errc::result_out_of_range), "Queue is empty");

            headIndex = nextIndex(headIndex);
            T data = queue[headIndex];
            return data;
        }

        //operator <<
        friend std::ostream& operator <<(std::ostream& out, cqueue<T>& queue){
            for(int i = 0; i <= queue.capacity; i++){
                if(i == queue.headIndex)
                    out << "i ";
                if(i == queue.tailIndex)
                    out << "f ";

                out << "\t" << i << ": [" << queue.queue[i] << "] " << std::endl;
            }
            return out;
        }
};