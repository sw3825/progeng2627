#include <iostream>

int main () {

    int ui = 1, so= 0;

    std::cout << "Hello please enter a number: " << std::endl;

    while(ui != 0) {
        std::cin >> ui;
        so = so + ui;
        std::cout<< "sum so far: " << so << std::endl;
    }
    std::exit;

}