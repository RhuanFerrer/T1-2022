#include <fstream>
#include <iostream>

#include "../../gstorage.h"
#include "../../dataTypes/circle/circle.h"

namespace georeader{
    void read(std::string geo){
        std::ifstream geoFile(geo);

        char flag;
        int id;
        double x, y, r, w, h;
        std::string colorF, colorS, text;

        gstorage* storage = gstorage::getInstance();
        dlist<geometricform>* geoList = storage->getGeoForms();
        geometricform *gf;

        while(geoFile >> flag){
            if(flag == 'c')
            {
                geoFile >> id >> x >> y >> r >> colorF >> colorS;
                geoList->insert((geometricform*)new circle(id, x, y, r, colorF, colorS));
            } 
            // else if(flag == 'r')
            // {
            //     geoFile >> id >> x >> y >> w >> h >> colorF >> colorS;
            //     geoList->insert(rectangle(id, x, y, w, h, colorF, colorS));
            // } 
            // else if(flag == 'l')
            // {
            //     geoFile >> id >> x >> y >> x >> y >> colorF >> colorS;
            //     geoList->insert(line(id, x, y, x, y, colorF, colorS));
            // } 
            // else if(flag == 't')
            // {
            //     geoFile >> id >> x >> y >> r >> colorF >> colorS >> text;
            //     geoList->insert(text(id, x, y, r, colorF, colorS, text));
            // }
        }

    }
}
