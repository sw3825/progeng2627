#include <iostream>
#include <string>

int main () {
    int Temperature;

    std::cout << " Hello!" << std::endl << "Please enter your current Temperature (in c):" << std::endl;
    std::cin >> Temperature;
    Temperature = Temperature * (9/5) + 32;
    std::cout << "Your Temp is: " << Temperature << " Fahreheit";
}