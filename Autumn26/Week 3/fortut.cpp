#include <iostream>

int main(){
   int  n=2, m;
    m= n;
    for(int i = 0; i < 7; i++){
        
        n= n*m;
        std::cout << n << std::endl;
    }
}