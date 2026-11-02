#include <iostream>
#include <string>


int main(){
    int money;
    std::string currency;
    std::string symbol;
    int curswitcher;
    std::cout << "Hello!" << std::endl << std::endl << "Welcome to Currency Calculator!" << std::endl << std::endl  << std::endl << "Please enter Your Currency! (Euro or Pound)" << std::endl;

    std::cin >> currency;
    
    if (currency == "Euro") {

        curswitcher = 1;
        symbol = "Pounds";

    } else if (currency == "Pound") {

        curswitcher = 2;
        symbol = "Euros";

    } else {

        std::cout << "Please enter a valid currency!" << std::endl;

        std::cin >> currency;

    }

    std::cout << " Perfect Thank you now type in your amount" << std::endl;
    std::cin >> money;

    if (curswitcher ==1 ) {

        money = money / 1.18;
    } else {
        money =money *1.18;
    }

    std::cout << "You have " << money << " " << symbol << std::endl;
}