#include <iostream>
#include "Set.h"
#include <chrono>
#include <time.h>

int main() {
    // uint16_t a = 1;
    // //a = a << 10;
    // std::cout << a << std::endl;
    // uint8_t b = 0;
    // b = static_cast<uint8_t>(a);
    // std::cout << static_cast<uint32_t>(b) << std::endl;
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();


    Set s(25);
    for (int i = 0; i < 25; i++){
        s.InsertElem(i);
    }
    std::cout<<s;



    std::vector<uint64_t> vector = s.GetPrimary();
    for (int i = 0; i < vector.size(); i++){
        std::cout<<vector[i]<<" ";
    }

    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::cout << "\nTime difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[us]" << std::endl;
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;

    return 0;
}