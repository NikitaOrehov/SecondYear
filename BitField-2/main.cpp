#include <iostream>
#include "Set.h"

int main() {
    // uint16_t a = 1;
    // //a = a << 10;
    // std::cout << a << std::endl;
    // uint8_t b = 0;
    // b = static_cast<uint8_t>(a);
    // std::cout << static_cast<uint32_t>(b) << std::endl;



    Set s(25);
    for (int i = 0; i < 25; i++){
        s.InsertElem(i);
    }
    std::cout<<s;



    std::vector<uint64_t> vector = s.GetPrimary();
    for (int i = 0; i < vector.size(); i++){
        std::cout<<vector[i]<<" ";
    }
    return 0;
}