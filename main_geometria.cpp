#include <iostream>
#include <string>

int main() {
    int num;
    std::string text;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "Ingresa un texto: ";
    std::cin >> text;
    std::cout << "El número ingresado es: " << num << "\nEl texto ingresado es: " << text << std::endl;
    return 0;
}
