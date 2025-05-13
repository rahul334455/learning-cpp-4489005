// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
//#define AGE_LENGTH 4
int main(){
    const size_t AGE_LENGTH = 4;
    int age[AGE_LENGTH];
    float tempratur[]= {31.5, 33.2 , 38.5};
    age[0] = 10;
    age[1] = 40;
    age[2] = 30;
    age[3] = 20;
    
      std:: cout << "age length is = " << AGE_LENGTH << " elements" << std::endl;
    std:: cout << "age[0] = " << age[0] << std::endl;
    std:: cout << "age[1] = " << age[1] << std::endl;
    std:: cout << "age[2] = " << age[2] << std::endl;
    std:: cout << "age[3] = " << age[3] << std::endl;
    std:: cout << std::endl;

       std:: cout << "temp[0] = " << tempratur[0] << std::endl;
    std:: cout << "temp[1] = " << tempratur[1] << std::endl;
    std:: cout << "temp[2] = " << tempratur[2] << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
