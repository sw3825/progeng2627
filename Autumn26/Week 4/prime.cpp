#include <iostream>



void smallest_factor(int& n, int& cf, bool& is_prime) {

        for(cf < n; cf++;){

        if( (n % cf) == 0){ // n can be divided by cf...

            if ( n == cf) {
                is_prime = true;
            }

           return;
        }


    }
}

int main() {
    int n= 0 , cf = 2;
    bool is_prime;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> n;
    smallest_factor(n, cf, is_prime);

    if (is_prime) {
        std::cout<< cf << " is a prime number "; 
    }else {
        std::cout << "The smallest factor is: " << cf;

    }


}