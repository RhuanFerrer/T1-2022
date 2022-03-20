/*    Includes    */
#include <iostream>

#pragma once

class gstorage {
   private:
    gstorage();

    static gstorage *instance;

    /*      ~ARGV~      */
    std::string geoFileName;
    std::string qryFileName;
    std::string inputPath;
    std::string outputPath;

   public:
    
    static gstorage* getInstance();
    
    /*      ~ARGV~      */
    void setGeoFileName(std::string geoFileName);
    void setQryFileName(std::string qryFileName);
    void setInputPath(std::string inputPath);
    void setOutputPath(std::string outputPath);
    std::string getGeoFileName();
    std::string getQryFileName();
    std::string getInputPath();
    std::string getOutputPath();

    friend std::ostream& operator<<(std::ostream& os, const gstorage& gs);

};