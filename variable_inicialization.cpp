#include<iostream>

int main(){
    int elephant_count; //may contains random garbage
    
    //Braced inicialization
    int lion_count{}; //Initializes to zero
    int dog_count {10}; //Initializes to 10
    int cat_count {15}; //Initializes to 15
    int domesticated_animals {dog_count + cat_count}; //Use expression
    // int conversion {2.9}; //Error

    //Functional inicialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);
    // int conversion (2.9); //Error or lose information

    //Assingnment inicialization
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int conversion = 2.9; //Lose information

    //Check size
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}