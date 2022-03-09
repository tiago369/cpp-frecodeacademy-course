#include<iostream>

int main(){
    //How we have used pointers so far
    int number {22};
    int * p_number = &number;

    std::cout << "number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "*p_number" << *p_number << std::endl;

    int *p_number1;
    int number1 {12};
    p_number1 = &number1;

    //Using dynamic memory
    
    //BAD
    // int *p_number2;
    // *p_number2 = 55; //CRASH


    return 0;
}