#include <iostream>

int main() {
    //creating two dimensional array of car names
    //first set of column represents rows and second columns
    std::string cars[][3] = {{"Mustang", "Escape", "Endeavour"},
                            {"Huracan", "Urus", "Aventador"},
                            {"911 GTR", "Turbo", "Carrera"}};
    
    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << "\n";
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << "\n";
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << "\n";

    return 0;
}