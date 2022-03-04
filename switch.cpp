#include<iostream>

int main(){

    const int pen {10};
    const int marker {20};
    
    int tool {pen};

    switch(tool){
        case pen: {
            std::cout << "" << std::endl;
        }
        break;
        case marker: {
            std::cout << "" << std::endl;
        }
        break;
        default:
            break;
    }

    return 0;
}