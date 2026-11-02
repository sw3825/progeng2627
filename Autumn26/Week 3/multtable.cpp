#include <iostream>

int main(){
    int n;
    std::cin >> n;

    // n times we draw one row
    // note that we need a different variable
    // for the loop counter
    int c2 = 1;
    int c = 1;
    while(c2 < n){

        // the following loop draws one row
        while( c < n){
            std::cout << c2 * c << "\t"; 
            // there is no << std::endl
            // because we want them on the same row
            c++;
        }
        c = 1;

        std::cout << std::endl;
        // we go on a newline after each row
        c2++;
    }

}