#include <iostream>

int main() {
    float numero_float;

    // Solicitar al usuario que ingrese un número
    std::cout << "Ingrese un número decimal: ";
    std::cin >> numero_float;

    // Convertir el número de float a int usando static_cast
    int numero_int = static_cast<int>(numero_float);

    // Mostrar el resultado de la conversión
    std::cout << "El número entero es: " << numero_int << std::endl;

    return 0;
}
