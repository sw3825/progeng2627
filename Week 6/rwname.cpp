#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){
    std::vector<std::string> v;
    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename+ ".txt");
    if(!infile.is_open()) {
        std::cout<< "Error" <<std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >>tmp) {
        v.push_back(tmp);
    }

    infile.close();

        std::cout << "enter name of output file" << std::endl;

    std::cin >> inputfilename;

    std::ofstream outfile; 
    outfile.open(inputfilename+ ".txt");
    
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;

    }

        for (const std::string& value : v) {
        outfile << value << std::endl;
        }
    

    outfile.close();


}