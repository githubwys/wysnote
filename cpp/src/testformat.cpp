#include <iostream>

int main(){
    std::string str = "   12 22 564.44";
    std::cout <<str<<std::endl;
    int num;
    num = std::atoi(str.c_str());
    std::cout <<num<<std::endl;

    
}