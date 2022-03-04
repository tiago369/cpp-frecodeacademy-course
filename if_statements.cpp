#include<iostream>

int main(){
    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2);
    std::cout << std::boolalpha << "result: " << result << std::endl;

    std::cout << std::endl;
    std::cout << "Free standing if statement" << std::endl;

    if(result == true){
        std::cout << number1 << "is less than" << number2 << std::endl;
    }
    if(!(result == true)){
        std::cout << number1 << "is NOT less than" << number2 << std::endl;
    }

    if(result == true){
        std::cout << number1 << "is less than" << number2 << std::endl;
    } else {
        std::cout << number1 << "is NOT less than" << number2 << std::endl;
    }

    std::cout << std::endl;

    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    if(green){
        if(police_stop){
            std::cout << "Stop" << std::endl;
        } else {
            std::cout << "GO" << std::endl;
        }
    }


    return 0;
}