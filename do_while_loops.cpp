#include<iostream>

int main(){

    size_t i {};
    const int COUNT {10};

    do{
        std::cout << i << ": I love C++" << std::endl;
        i++;
    } while (i < COUNT);

    return 0;
}