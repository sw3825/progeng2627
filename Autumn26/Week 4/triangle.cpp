#include <iostream>
#include <cmath>

double myArea(double a, double b){

    double result;

    result = (a*b) /2;
 
    return result;
}

double myPerimeter (double a, double b) {
    double result;

    result = sqrt((a+a)+(b*b))+ a +b;
    return result;
}

int main(){
    // we test examples with integer (and non-negative) exponent
    double a=5,b=3;
    std::cout << "A right triangle with the sides: " << a << " " << b << " has the Area: " << myArea(a,b) << " and the perimeter: " << myPerimeter(a,b) << std::endl;

}