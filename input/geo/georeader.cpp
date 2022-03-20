#include <iostream>
#include "../../gstorage.h"

namespace georeader{
    void read(std::string geo){
        std::ifstream geoFile(geo);

        //flags
        //c i x y r colorS colorF 
        //r i x y w h colorS colorF
        //l i x1 y1 x2 y2 colorS colorF
        //t i x y r colorS colorF a text
        char flag;
        int id;
        double x, y, r, w, h;
        std::string colorF, colorS, text;

        while(geoFile >> flag){
            if(flag == 'c'){
                geoFile >> id >> x >> y >> r >> colorF >> colorS;
                gstorage::getInstance()->addCircle(id, x, y, r, colorF, colorS);
            } else if(flag == 'r'){
                geoFile >> id >> x >> y >> w >> h >> colorF >> colorS;
                gstorage::getInstance()->addRectangle(id, x, y, w, h, colorF, colorS);
            } else if(flag == 'l'){
                geoFile >> id >> x >> y >> x >> y >> colorF >> colorS;
                gstorage::getInstance()->addLine(id, x, y, x, y, colorF, colorS);
            } else if(flag == 't'){
                geoFile >> id >> x >> y >> r >> colorF >> colorS >> text;
                gstorage::getInstance()->addText(id, x, y, r, colorF, colorS, text);
            }
        }

    }
}
