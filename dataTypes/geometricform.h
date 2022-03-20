#include <string>

#pragma once

class geometricform{
    protected:
        int id;
        double x;
        double y;
        std::string colorF;
        std::string colorS;
    public:
        geometricform(int id, double x, double y, std::string colorF, std::string colorS);
        void setColors(std::string colorF, std::string colorS);
        std::string* getColors();
        double* getCoordinates();
        int getId();
        friend std::ostream& operator<<(std::ostream& os, const geometricform& gf);
};