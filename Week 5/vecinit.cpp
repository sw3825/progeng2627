#include <iostream>
#include <vector>
#include <cmath>

double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int min_vector_element(const std::vector<double>& vin) {

    double min = vin[0];

    for(int i = 0; i < vin.size();i++) {
        if (min > vin[i]) {
            min = vin[i];
        }
    }

    return min;
}   

int search_vector(int sv, const std::vector<double>& vin) {
    for(int i = 0; i < vin.size();i++) {

        if (sv == vin[i]) {
            return i;
        }
        
    }
    return -1;
}

int main(){
    std::vector<double> v{3, 0.5, -15};
    
    // we can initialise vectors like this (no = needed)

    double expected_sum = 2.5,sv;
    // we may think of writing:
    // std::cout << (sum_vector(v) == 2.5) << std::endl;
    // but we shouldn't compare non-integers using ==
    // as the representation can be approximated

    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;
    // the test will be passed if we see 0 or a very small number

    v = {2, -1.1, 7, -1.5 , -3, -5 ,-7};
    // we can also assign values like this

    expected_sum = 6.4;

    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;

    std::cout << "Min value: " << min_vector_element(v)<< std::endl;

    std::cout << "What value are we looking for? " << std::endl;
    std::cin >> sv;
    
    sv = search_vector(sv, v);
    if (sv != -1) {
        std::cout << "It was found at the index: " << sv <<std::endl;
    }else {
        std::cout << "Value not found";
    }




}