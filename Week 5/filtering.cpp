#include <iostream>
#include <vector>

void append_vectors(const std::vector<double>& vin1,const std::vector<double>& vin2,std::vector<double>& vout)
{
    vout = vin1;  

    for (double value : vin2) {
        vout.push_back(value);
    }
}

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (double value : vin) {
        if (value < t) {
            vout.push_back(value);
        }
    }

}

int main()
{
    std::vector<double> v;
    std::vector<double> vout;
    double x,y,t;
 
    std::cout<< "How many numbers do you wanna store? " << std::endl;
    std::cin >> x ;
    for ( int i= 0; i<x; i++) {
        std::cout << "What should the next nr be?" << std::endl;
        std::cin >> y;
        v.push_back(y);    
    }
     std::cout << "What should it be compared against?" << std::endl;
     std::cin >> t;

    filter_v(v,t,vout);

    std::cout << "The resulting filtered list is: " ;
        for (double value : vout) {
        std::cout << value << " ";
    }


}