#include <string>

#pragma once

enum shapeType {
    circle,
    rectangle,
    triangle,
    line
};

class geometricform{
    protected:
        int id;
        int shape;
        double x;
        double y;
        std::string colorF;
        std::string colorS;
    public:
        geometricform(int id, double x, double y, std::string colorF, std::string colorS, int shape);
        void setColors(std::string colorF, std::string colorS);
        std::string* getColors();
        double* getCoordinates();
        int getShape();
        int getId();
        friend std::ostream& operator<<(std::ostream& os, const geometricform& gf);
};