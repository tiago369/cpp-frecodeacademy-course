#include<iostream>

int main(){

    int number1 {45};
    int number2 {60};

    std::cout << std::boolalpha;
    std::cout << "number1 < number2" << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2" << (number1 <= number2) <<std::endl;
    std::cout << "number1 > number2" << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2" << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2" << (number1 == number2) << std::endl;
    std::cout << "number1 != number2" << (number1 != number2) << std::endl;

    

    return 0;
}