#include <iostream>

int main(){
    int factorial,l;
    std::cout<< "Input factorial:" << std::endl;
    std::cin>> factorial;
    l=factorial;
    for(int i =1;i<l; i++){
        factorial = factorial * (l - i);
        std::cout<< factorial << std::endl;

    }
}