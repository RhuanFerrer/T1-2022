#include <fstream>
#include <iostream>

class a{
    public:
    int _a;
    a(int a){
        this->_a = a;
    }
};


class b : public a{
    public:
    int _b;
    b(int b) : a(1){
        this->_b = b;
    }
};

int main(int argc, char** argv) {

    b nb(2);

    std::cout << nb._a << std::endl;
    std::cout << nb._b << std::endl;

    return 0;
}


