#include<iostream>
#include<cmath>

int main(){

    double weight{7.7};

    std::cout << "Weight rounded to floor is: " << std::floor(weight) << std::endl;
    std::cout << "Weight rounded to ceil is:" << std::ceil(weight) << std::endl;

    double savings {-5000};

    std::cout << "Abs of weight is: " << std::abs(weight) << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is: " << std::abs(savings) << std::endl;

    double exponencial = std::exp(10):
    std::cout << "The exponencial of 10 is: " << exponencial << std::endl;
    
    std::cout << "3 ^ 4 = " << std::pow(3, 4) << std::endl;
    std::cout << "9 ^ 3 = " << std::pow(9, 3) << std::endl;

    std::cout << "To get 54,59 you need to elevate e to the power of: " << std::log(54.59) << std::endl;
    std::cout << "To get 100000 you need to elevate 10 to the power of: " << std::log10(100000) << std::endl;

    std::cout << "The square root of 81 is: " << std::sqrt(81) << std::endl;

    std::cout << "3.654 rounded to: " << std::round(3.654) << std::endl;
    std::cout << "2.5 rounded to: " << std::round(2.5) << std::endl;
    std::cout << "2.4 rounded to: " << std::round(2.4) << std::endl;

    return 0;
}