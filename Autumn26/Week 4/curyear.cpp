#include <iostream>
#include <ctime>

int main() {
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    int currentYear = localTime->tm_year + 1900;

    std::cout << "The current year is " << currentYear << '\n';
}