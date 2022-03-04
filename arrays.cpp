#include<iostream>

int main(){

    int scores[] {0,1,2,3,4};

    std::cout << "scores[0]: " << scores[0] << std::endl;
    std::cout << "scores[1]: " << scores[1] << std::endl;

    for(size_t i{}; i < 5; i++){
        std::cout << scores[i] << std::endl;
    }

    scores[0] = 20;

    for(size_t i{}; i < 5; i++){
        scores[i] = i * 10; 
    }

    int array[] {1,2,3,4,5,6,7,8};
    int sum {};

    for(int element : scores){
        sum += element;
    }


    return 0;
}