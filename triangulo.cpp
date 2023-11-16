#include <iostream>
#include <sstream 
#include <cmath>

namespace Geometria {
    double calcularArea () {
        double base, altura;
        std::string line;
        
        std::cout << "Ingresa la base: ";
        std::getline(std::cin, line);
        std::stringstream(line) >> base;

        std::cout << "Ingresa la altura: ";
        std::getline(std::cin, line);
        std::stringstream(line) >> altura;

        return 0.5 * base * altura;
        })
}