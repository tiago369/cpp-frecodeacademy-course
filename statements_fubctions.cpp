#include<iostream>

int sum_of_2(int a, int b){
    return a + b;
}

int main(){
    int first_number {3};
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;
    std::cout << "Sum of them: " << sum_of_2(first_number, second_number) << std::endl;

    return 0;
}