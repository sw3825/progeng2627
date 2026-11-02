#include <iostream>

int main () {
    int n,m,i = 1,f;
    std::cout<< "Hello please enter 2 numbers"<< std::endl;
    std::cin>> n >> m;
    f=m;
    while (i<n) {
        m = m+f;
        i++;
    }
    std::cout<< m;
}