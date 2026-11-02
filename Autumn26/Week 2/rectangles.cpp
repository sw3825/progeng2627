#include <iostream>

int main(){
    int x, y;
    std::cout << "Hello!" << std::endl << std::endl << "Welcome to the Rectangle Calculator!" << std::endl << std::endl << "This program will calculate the area and perimeter of a rectangle." << std::endl << "Please enter Your X and Y Side of the Rectangle!" << std::endl;

    std::cin >> x >> y;

    int a = x*y;

    std::cout << "The Area of the Rectangle is: " << a << std::endl;
    

}