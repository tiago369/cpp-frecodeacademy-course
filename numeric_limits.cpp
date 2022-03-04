#include<iostream>
#include<limits>

int main (){

    std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;

    std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::min() << std::endl;

    std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::min() << std::endl;

    std::cout << "The range (with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::min() << std::endl;

    std::cout << "Int is signed: " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "Int digits: " << std::numeric_limits<int>::digits << std::endl;

    return 0;
}