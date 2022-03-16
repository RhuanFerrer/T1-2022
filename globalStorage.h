#include <iostream>

#pragma once

class globalStorage
{

private:
    globalStorage();
    std::ifstream *qryFile;
    std::ifstream *geoFile;
    std::ofstream *svgFileStd;
    std::ofstream *svgFileQry;

public:
    static globalStorage *getInstance();
    void setQryFile(std::string fileName);
    void setGeoFile(std::string fileName);
    void setSvgFileStd(std::string fileName);
    void setSvgFileQry(std::string fileName);
    std::ifstream *getQryFile();
    std::ifstream *getGeoFile();
    std::ofstream *getSvgFileStd();
    std::ofstream *getSvgFileQry();
    
};