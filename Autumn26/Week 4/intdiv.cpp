#include <iostream>
#include <string>

std::string myintdiv(int nr1, int nr2) {
    int result = nr1 / nr2;
    int remainder = nr1 % nr2;

    return std::to_string(result) + " with a remainder of " + std::to_string(remainder);
}

int main() {
    int nr1, nr2;

    std::cout << "Please input 2 numbers:\n";
    std::cin >> nr1 >> nr2;

    std::cout << "The result of the intdiv between " << nr1 << " and " << nr2 << " is equal to: " << myintdiv(nr1, nr2);
}
