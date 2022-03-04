#include<iostream>

int main(){

    int value {5};

    value = value + 1;
    std::cout << "Value is: " << value << std::endl;

    value = 5;
    value = value - 1
    std::cout << "Value is: " << value << std::endl;

    std::cout << std::endl;

    value = 5;
    std::cout << "Value is: " << value++ << std::endl;
    std::cout << "value is: " << value << std::endl;

    value = 5;
    std::cout << "Value is: " << value-- << std::endl;
    std::cout << "value is: " << value << std::endl;

    std::cout << std::endl;

    value = 5;
    std::cout << "Value is: " << ++value << std::endl;
    std::cout << "value is: " << value << std::endl;

    value = 5;
    std::cout << "Value is: " << --value << std::endl;
    std::cout << "value is: " << value << std::endl;

    std::cout << std::endl;

    value = 5;
    ++value;
    std::cout << "value is: " << value << std::endl;

    value = 5;
    --value;
    std::cout << "value is: " << value << std::endl;

    return 0;
}