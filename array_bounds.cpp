#include<iostream>

int main(){

    int numbers[] {1,2,3,4,5,6,7,8,9,10};

    std::cout << "numbers[12]" << numbers[12] << std::endl;

    numbers[1299999] = 1000;
    std::cout << "numbers[1299999]" << numbers[1299999];

    return 0;
}