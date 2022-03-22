#include <iostream>
#include <cstddef>

template <typename T> struct Node{
    T data;
    Node *next;
    Node *prev;
};

template <typename T> class DynamicList{
    private:
        Node<T> *head;
        Node<T> *tail;
    
    public:
        DynamicList(){
            head = NULL;
            tail = NULL;
        };

        void insert(T data){
            Node<T> *node = new Node<T>();
            node->data = data;
            node->next = NULL;
            node->prev = tail;

            if(!head){
                head = node;
            }
            else{
                tail->next = node;
            }

            tail = node;
        }

        void printList(){
            Node<T> *n = head;
            while(n){
                std::cout << n->data << std::endl;
                n = n->next;
            }
        }
};
