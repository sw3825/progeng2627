#include <iostream>
#include <string>
#include <random>
#include <ctime>

int main() {

    std::cout<<"Welcome to the number akinator!" << std::endl << "Please think of a nr for me to guess! (only integers allowed!)";
    int secretnr;
    std::string yn;
    std::cout<< "Do you have a number? (yes/no)";
    std::cin>> yn;
    int rdm;
    int rdm_min = 0;
    int rdm_max = 2147483600;
    int posnrs = rdm_max - rdm_min;
    std::srand(std::time(NULL));

    if(yn == "yes" ) {
        std::cout<<"Perfect now first question:" << std::endl;
        rdm = (std::rand() % rdm_max) +rdm_min;
        std::cout<<"First Guess is your number Lower than: " << rdm_max - rdm << "?";
             std::cin>> yn;
        if(yn=="yes") {
            rdm_max =rdm;
        }else {
            rdm_min = rdm;

        }
        posnrs = rdm_max - rdm_min;

         rdm = (std::rand() % rdm_max) +rdm_min;
    }

    while(posnrs > 1) {
     std::cout<< "Currently there are: " << posnrs << " possible numbers that you could have chosen." << std::endl;
     std::cout << " Your your number higher than " << rdm << "? " <<std::endl;

     std::cin>> yn;
        if(yn=="yes") {
            rdm_min = rdm;
        }else {
            rdm_max =rdm;
        }
        posnrs = rdm_max - rdm_min;

         rdm = (std::rand() % rdm_max) +rdm_min;

    
        
    }

    std::cout << "I believe your number is: " <<rdm ;



}