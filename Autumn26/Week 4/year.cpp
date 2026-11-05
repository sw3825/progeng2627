#include <iostream>
#include <ctime>

int current_year() {
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    return localTime->tm_year + 1900;
}

bool leap_year(int year) {
    bool ly = false;

    if (year % 4 == 0) {
        ly = true;

        if (year % 100 == 0) {
            ly = false;

            if (year % 400 == 0) {
                ly = true;
            }
        }
    }

    return ly;
}

int next_leap_year() {
    int year = current_year() + 1;

    while (!leap_year(year)) {
        year = year + 1;
    }

    return year;
}

int main() {
    int year = current_year();
    int next_year = next_leap_year();
    int years_until = next_year - year;

    std::cout << "The current year is " << year << "\n";
    std::cout << "The next leap year is " << next_year << "\n";
    std::cout << "It is " << years_until << " years until then\n";
}