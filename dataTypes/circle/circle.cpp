#include <string>
#include <iostream>
#include "circle.h"

circle::circle(int id, double x, double y, double radius, std::string colorF, std::string colorS, int shape) : geometricform(id, x, y, colorF, colorS, shape) {
    this->radius = radius;
}

std::ostream& operator<<(std::ostream& os, const circle& c){
    os << "id: " << c.id << " x: " << c.x << " y: " << c.y << " radius: " << c.radius << " colorF: " << c.colorF << " colorS: " << c.colorS;
    return os;
}
