#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int search_vector(std::string s, const std::vector<std::string>& vin) {

    for(int i =0; const std::string& value : vin){ 

        if (value == s) {
            return i;
        }
        i++;
    }

    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {

    for(const std::string& value : vin1){
       if( search_vector(value,vin2) == -1) {
        vout.push_back(value);
       } 
    }

    for (const std::string& value :vin2) {
        vout.push_back(value);
    }

}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {

    for(const std::string& value : vin1) {
        if ( search_vector(value,vin2) != -1) {
            vout.push_back(value);
        }
    }

}




int main() {

    std::string s;
    std::vector<std::string> v1,v2,v3;
    std::ifstream infile1, infile2;
    infile1.open("warehouse1.txt");
    infile2.open("warehouse2.txt");
    if(!infile1.is_open() || !infile2.is_open()) {
        std::cout<<"Error" <<std::endl;
        return EXIT_FAILURE;
    }

    while (infile1 >> s ) {
        v1.push_back(s);
    }
        while (infile2 >> s ) {
        v2.push_back(s);
    }

     union_vector(v1,v2,v3);

    std::ofstream outfile; 
    outfile.open("union.txt");
    
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;

    }

        for (const std::string& value : v3) {
        outfile << value << std::endl;
        }


    outfile.close();
        v3.clear();

    intersection_vector(v1,v2,v3);
    outfile.open("intersection.txt");
    
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;

    }

        for (const std::string& value : v3) {
        outfile << value << std::endl;
        }
    

    outfile.close();







}