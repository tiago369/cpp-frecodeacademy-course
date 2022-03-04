#include<iostream>

int main(){

    const int pen {10};
    const int marker {20};
    const int eraser {30};
    const int rectangle {40};
    const int circle {50};
    const int ellipse {60};

    int tool {ellipse};

    if(tool == pen){
        std::cout << "" << std::endl;
    } else if(tool == marker){
        std::cout << "" << std::endl;
    } else if(tool == eraser){
        std::cout << "" << std::endl;
    } else if(tool == rectangle){
        std::cout << "" << std::endl;
    } else if(tool == circle){
        std::cout << "" << std::endl;
    } else if(tool == ellipse){
        std::cout << "" << std::endl;
    }

    return 0;
}