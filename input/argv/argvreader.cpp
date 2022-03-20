#include "argvreader.h"
#include <string>

namespace argvreader{
    //flags: -e = input path, -o = output path, -f = geo file name, -q = qry file name
    void read(int argc, char **argv){
        gstorage* storage = gstorage::getInstance();
        for(int i = 1; i < argc; i++){
            std::string arg = argv[i];
            std::string arg_next = i < argc - 1 ? argv[i + 1] : "";
          
            if(arg == "-e"){
                storage->setInputPath(arg_next + "/");
            }
            else if(arg == "-o"){
                storage->setOutputPath(arg_next + "/");
            }
            else if(arg == "-f"){
                storage->setGeoFileName(arg_next + "/");
            }
            else if(arg == "-q"){
                storage->setQryFileName(arg_next + "/");
            }
        }
    }
}