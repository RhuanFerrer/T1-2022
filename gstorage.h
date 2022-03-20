/*    Includes    */

#pragma once

#define generic template<class T>

class storage {
   private:
    storage();
    ~storage();
    static storage *instance;

   public:
    static storage* getInstance();
};