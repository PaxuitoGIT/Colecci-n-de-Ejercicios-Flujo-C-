#include <iostream>
#include <sstream>

namespace Matematicas {
    int suma (int a, int b){
    return a + b;
    }
    int resta (int a, int b) {
    return a - b; 
    }
}
int main() {
    int a, b;
    std::cout << "Ingresa un número: ";
    std::string imput1;
    std::getline(std::cin, imput1);
    std::stringstream(imput1) >> a;
    std::cout << "Ingresa otro número: ";
    std::string imput2;
    std::getline(std::cin, imput2);
    std::stringstream(imput2) >> b;
    int resultadosuma = Matematicas::suma(a, b);
    int resultadoResta = Matematicas::resta(a, b);
    std::cout << "El resultado de la suma es: " << resultadosuma << "\n";
    std::cout << "El resultado de la resta es: " << resultadoResta << "\n";
    return 0;
}