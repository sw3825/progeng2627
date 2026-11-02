#include <iostream>

int main () {
    int steps= 0;
    int max_nr;
    int input;
    std::cout<< "Please input a nr:" << std::endl;
    std::cin >> input;
    max_nr = input;
    while (input !=1) {
        
        if (input % 2 == 0) {
            input = input / 2;
        }else {
            input = input *3 +1;
        }
        if (input > max_nr){
            max_nr = input;
        }
        std::cout<< input << std::endl;
        steps++;
    }
    std::cout<< "Steps: " << steps << std::endl;
    std::cout<< "maxnr: " << max_nr;

}