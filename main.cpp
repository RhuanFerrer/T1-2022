#include <fstream>
#include <iostream>

#include "./dataStructures/cqueue/cqueue.h"
#include "./dataStructures/dlist/dlist.h"
#include "./dataTypes/geometricform.h"
#include "./dataTypes/circle/circle.h"
#include "./input/argv/argvreader.h"
#include "./input/geo/georeader.h"
#include "./input/qry/qryreader.h"
#include "gstorage.h"

int main(int argc, char** argv) {

    gstorage *storage = gstorage::getInstance();

    argvreader::read(argc, argv);

    georeader::read(storage->getGeoFileName());

    circle c = circle(1, 1, 1, 1, "red", "blue");

    std::cout << c;

    // cqueue<std::string> *qry = new cqueue<std::string>(5);

    // std::ifstream ex("teste.txt");

    //flags i STRING : insert STRING    r: remove f: finish
    // char flag;
    // int count = 1;
    // std::string str;
    // while (ex >> flag) {
    //     if (flag == 'i') {
    //         std::cout <<"-----------" << count << std::endl;
    //         ex >> str;
    //         qry->insert(str);
    //         if(qry->full())
    //             std::cout << "Queue is full" << std::endl;
    //     } else if (flag == 'r') {
    //         std::cout <<"-----------" << count << std::endl;
    //         std::cout << qry->remove() << std::endl;
    //         if(qry->empty())
    //             std::cout << "Queue is empty" << std::endl;
    //     } else if (flag == 'f') {
    //         break;
    //     }
    //     count++;
    // }

    return 0;
}


