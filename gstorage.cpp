#include "gstorage.h"

storage *storage::instance = nullptr;

storage* storage::getInstance() {
    static storage instance;
    return &instance;
}