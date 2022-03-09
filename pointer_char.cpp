#include<iostream>

int main(){

    char *message {"Hello World"};

    std::cout << "message: " << message << std::endl;
    std::cout << "*message: " << *message << std::endl;

    char message1[] {"Hello World"};
    message1[0] = 'B';
    std::cout << "message1: " << message1 << std::endl;

    return 0;
}