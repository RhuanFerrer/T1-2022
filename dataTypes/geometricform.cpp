#include <string>
#include <iostream>
#include "geometricform.h"

geometricform::geometricform(int id, double x, double y, std::string colorF, std::string colorS, int shape) {
    this->id = id;
    this->x = x;
    this->y = y;
    this->colorF = colorF;
    this->colorS = colorS;
    this->shape = shape;
}

void geometricform::setColors(std::string colorF, std::string colorS){
    this->colorF = colorF;
    this->colorS = colorS;
}

std::string* geometricform::getColors(){
    static std::string colors[] = {colorF, colorS};
    return colors;
}

double* geometricform::getCoordinates(){
    static double coordinates[] = {x, y};
    return coordinates;
}

int geometricform::getId(){
    return id;
}

std::ostream &operator<<(std::ostream &os, const geometricform &gf){
    os << "id: " << gf.id << " x: " << gf.x << " y: " << gf.y << " colorF: " << gf.colorF << " colorS: " << gf.colorS;
    return os;
}
