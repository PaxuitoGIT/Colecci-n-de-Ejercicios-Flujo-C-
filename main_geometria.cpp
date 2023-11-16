#include <iostream>
#include <string>
#include <sstream>

int main() {
    int num;
    std::string text, line;

    std::cout << "Ingresa un número: ";
    std::getline(std::cin, line);
    std::stringstream(line) >> num;

    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);

    std::cout << "El número ingresado es: " << num << "\nEl texto ingresado es: " << text << std::endl;
    
    return 0;
}
