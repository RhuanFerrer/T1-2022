#include <iostream>

#include "./dataStructures/dlist/dlist.h"
#include "./input/argv/argvreader.h"
#include "./input/geo/georeader.h"
#include "./input/qry/qryreader.h"
#include "gstorage.h"

int main(int argc, char** argv) {

    gstorage *storage = gstorage::getInstance();

    argvreader::read(argc, argv);

    std::cout << *storage << std::endl;

    // georeader::read(storage->getGeoFileName());
    
    // qryreader::execute(storage->getQryFileName());

    return 0;
}


