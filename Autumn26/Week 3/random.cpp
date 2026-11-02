#include <iostream>
#include <random>
#include <ctime>

int main(){
    std::srand(std::time(NULL));
    std::cout << (std::rand() % 6) + 1 << std::endl;
}