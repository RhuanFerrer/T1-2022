/*    Includes    */

#pragma once

class storage {
   private:
    storage();
    ~storage();
    static storage *instance;

   public:
    static storage* getInstance();
};