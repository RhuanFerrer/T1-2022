#include <string>
#include "../geometricform.h"

#pragma once

class circle : public geometricform {
    private:
        double radius;
    public:
        
        circle(int id, double x, double y, double radius, std::string colorF, std::string colorS);
        
        double getRadius();

        friend std::ostream& operator<<(std::ostream& os, const circle& c);
};