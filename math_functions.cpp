#include <iostream>
//the rest of the functions are found within cmath header file
#include <cmath>

int main() {
    double x = 3.14;
    double y = 4;
    double z;

    //z = std::max(x, y);
    //z = std::min(x, y);
    //z = pow(2, 3);
    //z = sqrt(9);
    //z = abs(-3); //abs - absolute value function turns any negative input to positive
    //z = round(x);
    //z = ceil(x);  //ceil rounds 'up' a number
    z = floor(x);  //floor rounds 'down' a number

    //https://cplusplus.com/reference/cmath/

    std::cout << z;

    return 0;
}