#include <iostream>

int main () {
    int n=1,m=1,i = 1,f=1;
    std::cout<< "Hello please enter 2 numbers"<< std::endl;
    std::cin>> m >> n;
    f=n;
    while (m>n) {
        m = m-f;
        i++;
    }
    std::cout<< i;
}