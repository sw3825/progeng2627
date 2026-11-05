#include <iostream>
#include <cmath>

double mypow(double base, double exp){
    double result = 1; 
    

    // we declare a variable for the result
    // (should it be initialised? to what value?)

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    if (exp >0) {

        while ( exp >0) {
        result = result *base;
        exp--;
         }
    }else {
         while ( exp <0) {
        result = result *-base;
        exp++;
        
         }

    }


    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main(){
    // we test examples with integer (and non-negative) exponent
    int nr1,nr2;
    std::cout << "Please input 2 numbers: ";
    std::cin >> nr1;
    std::cin >> nr2;
    std::cout << nr1 << " to the power of " << nr2  << " is equal to: " << mypow(nr1,nr2) << std::endl;

}