#include <iostream>
#include <string>
#include "triangulo.cpp"  // Incluir el código de triangulo.cpp
#include "circulo.cpp"    // Incluir el código de circulo.cpp

int main() {
    double base, altura, radio;

    // Solicitar al usuario que ingrese los datos para el triángulo
    std::cout << "Ingresa la base del triángulo: ";
    std::cin >> base;
    std::cout << "Ingresa la altura del triángulo: ";
    std::cin >> altura;

    // Utilizar la función del espacio de nombres Geometria::Triangulo
    double areaTriangulo = Geometria::Triangulo::calcularArea(base, altura);
    std::cout << "El área del triángulo es: " << areaTriangulo << std::endl;

    // Solicitar al usuario que ingrese los datos para el círculo
    std::cout << "Ingresa el radio del círculo: ";
    std::cin >> radio;

    // Utilizar la función del espacio de nombres Geometria::Circulo
    double areaCirculo = Geometria::Circulo::calcularArea(radio);
    std::cout << "El área del círculo es: " << areaCirculo << std::endl;

    return 0;
}