// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
//#define DEBUG
int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
    #ifdef DEBUG
    std:: cout <<"[abbout to perform addition]" << std::endl;
    #endif
    large += small;
    std::cout << "the large integer is  " << large << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
