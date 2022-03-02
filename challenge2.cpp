#include<iostream>

int times(int a, int b){
    return a * b;
}

int main(){
    int first_num {5};
    int second_num {4};

    std::cout << "First number: " << first_num << std::endl;
    std::cout << "Second number: " << second_num << std::endl;
    std::cout << "Multiplication of two: " << times(first_num, second_num) << std::endl;

    return 0;
}