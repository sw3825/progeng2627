#include <iostream>

int main () {

    int ui = 1, so= 0, i=1, av= 0;

    std::cout << "Hello please enter a number: " << std::endl;

    while(ui != 0) {
        std::cin >> ui;
        av= av+ui;
        so = av /i;
        std::cout<< "Average so far: " << so << std::endl;
        i++;
    }
    std::exit;

}