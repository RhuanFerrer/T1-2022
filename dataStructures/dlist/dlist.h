#include <iostream>

#include "../../gstorage.h"
#include "../node.h"
#include "../../util.h"

#pragma once

generic
class dlist
{
    private:
        node<T> *head;
        node<T> *tail;
        int size;

        node<T> *getNode(int index){
            node<T> *current = head;
            for(int i = 0; i < index; i++){
                current = current->next();
            }
            return current;
        }

    public:     

        dlist(){head = NULL; tail = NULL; size = 0;};
        ~dlist(){};
        int length() { return size; };

        friend std::ostream &operator<<(std::ostream &out, const dlist<T> &list)
        {
            node<T> *current = list.head;
            out << "[";
            
            for(int i = 0; i < list.size; i++)
            {
                out << *current;
                current = current->next();
                if(i != list.size - 1)
                    out << ", ";
            }
            out << "]";

            return out;
        };

        void insert(T data)
        {
            node<T> *newNode = new node<T>(data);

            if(head == nullptr)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next(newNode);
                newNode->prev(tail);
                tail = newNode;
            }
            size++;
        };

        void remove()
        {
            if(head == nullptr)
                throw "List is empty";

            node<T> *temp = tail;
            tail = tail->prev();
            tail->next(nullptr);
            delete temp;

            size--;
        }

        void remove(int index){
            if(index >= size - 1)
                throw "Index out of bounds";

            node<T> *temp = head;
            for(int i = 0; i < index; i++)
                temp = temp->next();

            temp->prev()->next(temp->next());
            temp->next()->prev(temp->prev());
            delete temp;

            size--;
        }

        T get(int index)
        {

            if(abs(index) > size - 1)
                throw std::system_error(std::make_error_code(std::errc::result_out_of_range), "Index out of bounds");

            node<T> *temp;

            if(index>=0)
            {
            std::cout << "index: " << index << std::endl;
                temp = head;
                for(int i = 0; i < index; i++)
                    temp = temp->next();
            }

            else
            {
                temp = tail;
                for(int i = 0; i < abs(index); i++)
                    temp = temp->prev();
            }

            return temp->get();
        }

        void forEach(T(*func)(T))
        {
            node<T> *current = head;
            for(int i = 0; i < size; i++)
            {
                current->set(func(current->get()));
                current = current->next();
            }
        }

        bool exists(T data)
        {
            node<T> *current = head;
            for(int i = 0; i < size; i++)
            {
                if(current->get() == data)
                    return true;
                current = current->next();
            }
            return false;
        }

        void sort(bool(*comare)(T, T)){
            for(int i = 0; i < size; i++)
            {
                node<T> *current = head;
                for(int j = 0; j < size - i - 1; j++)
                {
                    if(comare(current->get(), current->next()->get()))
                    {
                        T temp = current->get();
                        current->set(current->next()->get());
                        current->next()->set(temp);
                    }
                    current = current->next();
                }
            }
        }
};
