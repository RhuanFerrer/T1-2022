#include "gstorage.h"

#include <iostream>

#include "dataSructures\dlist\dlist.h"
#include "dataTypes/geometricform.h"

gstorage *gstorage::instance = nullptr;

gstorage::gstorage() {}

gstorage *gstorage::getInstance() {
    if (instance == nullptr) 
        instance = new gstorage();
    
    return instance;
}

void gstorage::setGeoFileName(std::string geoFileName) {
    this->geoFileName = geoFileName;
}

void gstorage::setQryFileName(std::string qryFileName) {
    this->qryFileName = qryFileName;
}

void gstorage::setInputPath(std::string inputPath) {
    this->inputPath = inputPath;
}

void gstorage::setOutputPath(std::string outputPath) {
    this->outputPath = outputPath;
}

std::string gstorage::getGeoFileName() {
    return this->geoFileName;
}

std::string gstorage::getQryFileName() {
    return this->qryFileName;
}

std::string gstorage::getInputPath() {
    return this->inputPath;
}

std::string gstorage::getOutputPath() {
    return this->outputPath;
}

std::ostream& operator<<(std::ostream& os, const gstorage& gs){
    os << "geoFileName: " << gs.geoFileName << std::endl;
    os << "qryFileName: " << gs.qryFileName << std::endl;
    os << "inputPath: " << gs.inputPath << std::endl;
    os << "outputPath: " << gs.outputPath << std::endl;
    return os;
}

dlist<geometricform>* gstorage::getGeoForms() {
    if(this->geoForms == nullptr)
        this->geoForms = new dlist<geometricform>();
    return this->geoForms;
}