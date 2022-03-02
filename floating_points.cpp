#include<iostream>
#include<iomanip>

int main(){

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3{1.12345678901234567890L};

    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;


    //Precision
    std::cout << std::setprecision(20);
    std::cout << "number1 is: " << number1 << std::endl;
    std::cout << "number2 is: " << number2 << std::endl;
    std::cout << "number3 is: " << number3 << std::endl;

    //Scientific notation

    double number4 {192400023};
    double number5 {1.92400023e8};
    double number6 {1.924e8};
    double number7 {0.00000000003498};
    double number8 {3.498e11};

    std::cout << "number 4:" << number4 << std::endl;
    std::cout << "number 5:" << number5 << std::endl;
    std::cout << "number 6:" << number6 << std::endl;
    std::cout << "number 7:" << number7 << std::endl;
    std::cout << "number 8:" << number8 << std::endl;

    // -------

    double number9 {1};
    double number10 {};
    double number11 {};

    //Infinity
    double result {number9 / number10};
    
    std::cout << number9 << " / " << number10 << " = " << result << std::endl;
    std::cout << result << " + " << number9 << " = " << result+number9 << std::endl;

    //NaN
    result = number10 / number11;

    std::cout << number10 << " / " << number11 << " = " << result << std::endl;


    return 0;
}