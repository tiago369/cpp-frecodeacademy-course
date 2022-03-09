#include<iostream>

int main(){
    int * p_number {}; // will intialize with nullptr
    double * p_fractional_number {};

    int * p_number1 {nullptr};
    double * p_fractional_number1 {nullptr};

    std::cout << "sizeof(int)" << sizeof(int) <<std::endl;
    std::cout << "sizeof(int*)" << sizeof(int*) << std::endl;
    std::cout << "sizeof(double)" << sizeof(double) <<std::endl;
    std::cout << "sizeof(double*)" << sizeof(double*) << std::endl;

    int *is_a_pointer, its_not_a_pointer;

    int int_var {45};
    int *p_int {&int_var};

    std::cout << "Int var: " << int_var << std::endl;
    std::cout << "p_int: " << p_int << std::endl;

    int *p_int2 {};
    int int_data {56};
    p_int2 = &int_data;
    std::cout << "value: " << *p_int2 << std::endl;

    return 0;
}