#include <iostream>
#include <sstream>
#include <cmath>

namespace Geometria {
    double calcularArea () {
        double radio;
        std::string line;
        
        std::cout << "Ingrese el número del radio: ";
        std::getline(std::cin, line);
        std::stringstream(line) >> radio;

        return M_PI * pow(radio, 2);
    }
}