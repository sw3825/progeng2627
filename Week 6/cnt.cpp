#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){
    int cnt = 0;
    std::vector<std::string> v1,v2;
    std::string inputfilename = "text.txt";
    std::ifstream infile; 

    infile.open(inputfilename);
    if(!infile.is_open()) {
        std::cout<< "Error" <<std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >>tmp) {
        v1.push_back(tmp);
    }

    infile.close();


    inputfilename = "words.txt";

    infile.open(inputfilename);
    if(!infile.is_open()) {
        std::cout<< "Error" <<std::endl;
        return EXIT_FAILURE;
    }

        std::ofstream outfile; 
         outfile.open("output.txt");


            if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;

    }


    while(infile >>tmp) {
        v2.push_back(tmp);
    } 

    for (const std::string& value : v2) {

        for (int i = 0; i < v1.size(); i++) {
            if (value == v1[i]) {
                cnt++;

            }
        }

        outfile << value << ": " << cnt << std::endl;
        cnt = 0;



    }




    outfile.close();


}