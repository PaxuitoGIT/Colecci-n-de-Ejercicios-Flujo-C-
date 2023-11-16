#include <iostream>
#include <iomanip>
#include <sstream>

int main() {
    double num;
    std::string line;
    std::cout << "Ingresa un número: ";
    std::getline (std::cin, line);
    std::stringstream(line) >> num;

    std::cout << "El número ingresado es: " << std::fixed << std::setprecision(2) << num << std::endl;
    
    return 0;
}