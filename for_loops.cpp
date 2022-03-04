#include<iostream>

int main(){

    for(size_t i{}; i < 10; i++){
        std::cout << "I love C++" << std::endl;
    }
    // std::cout << "Size of I is: " << i << std::endl; //ERROR

    const size_t COUNT {10};
    size_t j {};

    for( ; j < COUNT; j++){
        std::cout << j << std::endl;
    }
    std::cout << "Size of J is: " << j << std::endl;


    return 0;
}