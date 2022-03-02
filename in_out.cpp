#include<iostream>
#include<string>

int main(){
    std::cout << "Hello C++20" << std::endl;

    int age {21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "ERROR MESSAGE: Something is wrong" << std::endl;
    std::clog << "LOG MESSAGE: Someting happened" << std::endl;

    int age1;
    std::string name;

    std::cout <<"Please type your name and age " << std::endl;
    
    std::cin >> name;
    std::cin >> age1;
    
    std::cout << "Hello " << name << " you are " << age1 << " years old" << std::endl;

    std::string full_name{};
    std::cout << "Please type your full name " << std::endl;
    std::getline(std::cin,full_name);

    
    return 0;
}