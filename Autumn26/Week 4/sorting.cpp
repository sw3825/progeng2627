#include <iostream>

void sort_two_numbers(double& s1, double& s2, double& s3) {
    double f1, f2, f3;

    if (s1 >= s2 && s1 >= s3) {
        f1 = s1;
        if (s2 >= s3) {
            f2 = s2;
            f3 = s3;
        } else {
            f2 = s3;
            f3 = s2;
        }
    } else if (s2 >= s1 && s2 >= s3) {
        f1 = s2;
        if (s1 >= s3) {
            f2 = s1;
            f3 = s3;
        } else {
            f2 = s3;
            f3 = s1;
        }
    } else {
        f1 = s3;
        if (s1 >= s2) {
            f2 = s1;
            f3 = s2;
        } else {
            f2 = s2;
            f3 = s1;
        }
    }

    s1 = f1;
    s2 = f2;
    s3 = f3;
}

int main() {
    double n1, n2, n3;

    std::cout << "Please enter three numbers:\n";
    std::cin >> n1 >> n2 >> n3;

    sort_two_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << '\n';
}

//ai was used here to tidy up the code mess i had thats why it is very organised
