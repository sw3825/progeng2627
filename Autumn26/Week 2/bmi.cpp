#include <iostream>
#include <string>

int main () {

    float weight, height, bmi;

    std::cout << "Hello!" << std::endl << "This Program wil calculate your BMI" << std::endl << "Please enter your weight (in kg) and then your height (in meters)";
    std::cin >> weight;
    std::cin >> height;
    height = height * height;
    bmi = weight / height;
    std::cout << std::endl << "Your bmi is: " << bmi;
}