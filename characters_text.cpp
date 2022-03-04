#include<iostream>

int main(){

    char character {'a'};
    std::cout << character << std::endl;

    std::cout << std::endl;

    char value = 65;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;

    return 0;
}