#include <iostream>
#include <vector>

void append_vectors(const std::vector<double>& vin1,const std::vector<double>& vin2,std::vector<double>& vout)
{
    vout = vin1;  

    for (double value : vin2) {
        vout.push_back(value);
    }
}

int main()
{
    std::vector<double> v{1, 2, 3, 4, 5};
    std::vector<double> v2{6, 7, 8, 9, 10};
    std::vector<double> vout;

    append_vectors(v, v2, vout);

    for (double value : vout) {
        std::cout << value << " ";
    }


}