#include<iostream>

int main(){

    size_t i{};
    const int COUNT {10};

    while(i < COUNT){
        std::cout << i << ": I love C++" << std::endl;
        i++;
    }

    return 0;
}