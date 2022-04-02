#include <iostream>
#include <fstream>

#pragma once

#define TAB "\t"

class svgWrite {
    private:

    public:

        static void startSVG(std::ofstream &svgFile);
        static void drawCircle(std::ofstream &svgFile, double x, double y, double radius, std::string border, std::string fill);
        static void drawRectangle(std::ofstream &svgFile, double x, double y, double width, double height, std::string border, std::string fill);
        static void writeText(std::ofstream &svgFile, double x, double y, std::string text, std::string fontSize, std::string fill);
        static void drawLine(std::ofstream &svgFile, double x1, double y1, double x2, double y2, std::string border, std::string fill);
        static void endSVG(std::ofstream &svgFile);

};