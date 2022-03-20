#include <iostream>

#include "../../storage.h"
#include "../node.h"

#pragma once

generic
class dlist
{
    private:
        node<T> *head;
        node<T> *tail;
        unsigned int size;
    public:     

        dlist(){head = NULL; tail = NULL; size = 0;};
        ~dlist(){};

        friend std::ostream &operator<<(std::ostream &out, const dlist<T> &list)
        {
            node<T> *current = list.head;
            out << "[";
            
            for(unsigned int i = 0; i < list.size; i++)
            {
                out << *current;
                current = current->next();
                if(i != list.size - 1)
                    out << ", ";
            }
            out << "]";

            return out;
        };
        

        unsigned int length() { return size; };

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

        void remove(unsigned int index){
            if(index >= size - 1)
                throw "Index out of bounds";

            node<T> *temp = head;
            for(unsigned int i = 0; i < index; i++)
                temp = temp->next();

            temp->prev()->next(temp->next());
            temp->next()->prev(temp->prev());
            delete temp;

            size--;
        }
};