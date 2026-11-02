#include <iostream>
#include <string>

int main () {
    int n, rem;

    std::cout << " Hello! Please enter a number" << std::endl;
    std::cin >> n;
    rem = n % 3;
    if ( rem == 0) {
        std::cout << "This number is a multiple of 3";
    }   else {
                std::cout << "This number is NOT a multiple of 3";

    }
}