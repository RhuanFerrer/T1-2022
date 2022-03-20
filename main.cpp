#include <iostream>

#include "./dataStructures/dlist/dlist.h"

int main(int argc, char* argv[]) {
    dlist<int>* list = new dlist<int>();

    list->insert(1);
    list->insert(2);
    list->insert(3);
    
    std::cout << *list << std::endl;

    return 0;
}