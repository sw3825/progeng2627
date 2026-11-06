#include <iostream>
#include <vector>

int main(){
    int x,y,z = 0;
    std::vector<int> v; 
    std::cout<< "How many numbers do you wanna store? " << std::endl;
    std::cin >> x ;
    for ( int i= 0; i<x; i++) {
        std::cout << "What should the next nr be?" << std::endl;
        std::cin >> y;
        v.push_back(y);    
    }
     std::cout << "What should it be compared against?" << std::endl;
     std::cin >> y;

    for ( int i= 0; i<x; i++) {
      //  std::cout << " i is equal to: " << i << std::endl;
        if (v[i] == y ) {
            z++;
        } 
         
    }
    std::cout << "There are " << z << " Instances of this number" << " at the indices of: " << std::endl;
   for ( int i= 0; i<x; i++) {
      //  std::cout << " i is equal to: " << i << std::endl;
        if (v[i] == y ) {
            std::cout << i << std::endl;
        } 
         
    }



}