#include<iostream>

int main(){

    int scores[] {10,12,14,16,18,20};

    std::cout << "scores size: " << std::size(scores) << std::endl;

    for(size_t i{}; i < std::size(scores); ++i){
        std::cout << i << std::endl;
    }

    for(auto score : scores){
        std::cout << score << std::endl;
    }

    return 0;
}