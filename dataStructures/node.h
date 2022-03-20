#include "../../storage.h"

#pragma once

generic
class node{
    private:
        T data;
        node<T> *_next;
        node<T> *_prev;
    public:
        node(T data){ this->data = data; _next = nullptr; _prev = nullptr; };
        node<T> *next(){ return _next; };
        node<T> *prev(){ return _prev; };
        void next(node<T> *next){ _next = next; };
        void prev(node<T> *prev){ _prev = prev; };
        // operator <<
        friend std::ostream &operator<<(std::ostream &out, const node<T> &node)
        {
            out << node.data;
            return out;
        };
        T get(){ return data; };
};