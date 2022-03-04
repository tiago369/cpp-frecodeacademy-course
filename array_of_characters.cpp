#include<iostream>

int main(){
    
    char message[] {'H','e','l','l','o'};
    std::cout << "message: " << std::endl;
    for(auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;

    char message1[] {'H','e','l','l','o','\0'};
    std::cout << "message:" << message1 << std::endl;

    char message2[6] {'H','e','l','l','o'};
    std::cout << "message:" << message2 << std::endl;

    char message3[] {'H','e','l','l','o'};
    std::cout << "message:" << message3 << std::endl;

    char message4[] {"Hello"};
    std::cout << "message:" << message4 << std::endl;

    return 0;
}