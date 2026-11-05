#include <iostream>
#include <cmath>

int checker(int n1, int n2) {
    if(n1>n2) {
        return n1;
    }else {
        return n2;
    }

}

int main () {
    int nr1,nr2;
    std::cout << " Please type 2 numbers:" << std::endl;
    std::cin >> nr1;
    std::cin >> nr2;
    std::cout << "The bigger number is: " << checker(nr1, nr2);


}