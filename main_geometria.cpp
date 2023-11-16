#include <iostream>
#include <iomanip>

namespace Ciencia {
    namespace Fisica {
        const double velocidadDeLaLuz = 299792458.0;
        double calcularEnergia(double masa) {
            return masa * velocidadDeLaLuz * velocidadDeLaLuz;
        }
    }
}

int main() {
    double masa;
    std::cout << "Ingresa la masa (en kg): ";
    std::cin >> masa;
    double energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "La energía correspondiente es: " << std::fixed << std::setprecision(2) << energia << " Joules" << std::endl;

    return 0;
}
