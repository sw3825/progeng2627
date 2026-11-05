#include <iostream>


int smallest_factor(int n){
    for (int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){

            return cf;
        }
    }

    return -1;

}


void smallest_factor(int& n, int& n2, int& cf, bool& is_prime) {

        is_prime = false;

        for (; cf <= n; cf++){

        if( (n % cf) == 0){

            if ( n == cf) {
                is_prime = true;
            }

           return;
        }


    }
}

void prime_factors(int& n, int& n2, int& cf, bool& is_prime,int& min, int& max){

    while (min <= max) {
        cf = 2;
        n = min;
        smallest_factor(n, n2, cf, is_prime);

        if (is_prime) {
            std::cout << cf << std::endl;
        }

        min++;

    }

}

void prime_range(int& n, int& n2, int& cf, bool& is_prime,int& min, int& max) {
    min = n;
    max = n2;

    //check our min
    cf = 2;
    smallest_factor(n, n2,cf, is_prime);

    if (is_prime)
    {
        is_prime = false;
        min++;

    }

    // check our max
    cf = 2;
    n = max;
    smallest_factor(n, n2,cf, is_prime);

    if (is_prime)
    {
        std::cout << "maxprime ";
        is_prime = false;
        max--;

    }

    cf =2;
    n=0;


    prime_factors(n, n2,cf, is_prime,min,max);





    return;

}

int main() {
    int n= 0 ,n2 = 0, cf = 2 , min ,max;
    bool is_prime = false;
    std::cout << "Please enter two numbers (min,max): " << std::endl;
    std::cin >> n;
    std::cin >> n2;

    prime_range(n, n2,cf, is_prime,min,max);



}