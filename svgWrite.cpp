#include <iostream>
#include <fstream>
#include "svgWrite.hpp"

void svgWrite::startSVG(std::ofstream &svgFile){ 
    svgFile << "<svg version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\">" << std::endl;
};

void svgWrite::drawCircle(std::ofstream &svgFile, double x, double y, double radius, std::string border, std::string fill){
    svgFile << TAB << "<circle cx=\"" << x << "\" cy=\"" << y << "\" r=\"" << radius << "\" stroke=\"" << border << "\" fill=\"" << fill << "\" />" << std::endl;
};

void svgWrite::drawRectangle(std::ofstream &svgFile, double x, double y, double width, double height, std::string border, std::string fill){
    svgFile << TAB << "<rect x=\"" << x << "\" y=\"" << y << "\" width=\"" << width << "\" height=\"" << height << "\" stroke=\"" << border << "\" fill=\"" << fill << "\" />" << std::endl;
};

void svgWrite::writeText(std::ofstream &svgFile, double x, double y, std::string text, std::string fontSize, std::string fill){
    svgFile << TAB << "<text x=\"" << x << "\" y=\"" << y << "\" font-size=\"" << fontSize << "\" fill=\"" << fill << "\">" << text << "</text>" << std::endl;
};

void svgWrite::drawLine(std::ofstream &svgFile, double x1, double y1, double x2, double y2, std::string border, std::string fill){
    svgFile << TAB << "<line x1=\"" << x1 << "\" y1=\"" << y1 << "\" x2=\"" << x2 << "\" y2=\"" << y2 << "\" stroke=\"" << border << "\" fill=\"" << fill << "\" />" << std::endl;
};

void svgWrite::endSVG(std::ofstream &svgFile){
    svgFile << "</svg>" << std::endl;
};
