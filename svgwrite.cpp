#include <iostream>
#include <fstream>
#include "svgwrite.hpp"

void svgwrite::startSVG(std::string filePath){
    //std::remove(filePath); 
    
    std::ofstream svgFile;
    svgFile.open(filePath);

    svgFile << "<svg version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\">" << std::endl;

    svgFile.close();
};