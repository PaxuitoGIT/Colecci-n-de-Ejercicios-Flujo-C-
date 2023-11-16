#include <iostream>
#include <sstream>
#include <string>
#include "triangulo.cpp"
#include "circulo.cpp"

int main() {
    double baseTriangulo, alturaTriangulo, radioCirculo;
    std::cout << "Ingresa la base del triángulo: ";
    std::cin >> baseTriangulo;

    std::cout << "Ingresa la altura del triángulo: ";
    std::cin >> alturaTriangulo;
    double areaTriangulo = Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo);
    std::cout << "Ingresa el radio del círculo: ";
    std::cin >> radioCirculo;
    double areaCirculo = Geometria::calcularAreaCirculo(radioCirculo);
    std::cout << "El área del triángulo es: " << areaTriangulo << std::endl;
    std::cout << "El área del círculo es: " << areaCirculo << std::endl;

    return 0;
}
