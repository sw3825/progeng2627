#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){
    int cnt = 0;
    std::vector<std::string> v1,v2,v3;
    std::string inputfilename = "dictionary.txt";
    std::ifstream infile; 

    infile.open(inputfilename);
    if(!infile.is_open()) {
        std::cout<< "Error" <<std::endl;
        return EXIT_FAILURE;
    }

    std::string left,right,tmp;

    while(infile >>left >>right) {
        v1.push_back(left);
        v2.push_back(right);
    }

    infile.close();


    inputfilename = "ad.txt";







        std::ofstream outfile; 
         outfile.open("output.txt");


            if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;

    }



    infile.open(inputfilename);
    if(!infile.is_open()) {
        std::cout<< "Error" <<std::endl;
        return EXIT_FAILURE;
    }
    bool found;
        while(infile >>tmp) {
        v3.push_back(tmp);
        found =false;

        for( int i = 0; i<v1.size();i++) {

            
            if (tmp == v1[i]) {
                outfile << v2[i] << " ";
                found = true;
                break;
            }

        }
        if(!found) {

            outfile << tmp << " ";
        }
    } 




    outfile.close();


}