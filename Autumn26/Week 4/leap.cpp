#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;

    if ((year % 4) == 0) {
        ly = true;
        if ((year % 100) == 0)  
        {
            ly = false;
            if ((year % 400) == 0) {
                ly = true;
            }
            
        }
        
    }

   

    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}

int main(){

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    // a function returning a bool 
    // can be used directly in the condition
    // of an if statement 


    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
}

// i know we were supposed to do alot of if else here but this is a far better way that print everytyhing correctly example:
//please enter a year
//1600
//it's a leap year
//please enter a year
//1700
//it's not a leap year
//please enter a year
//2400
//it's a leap year