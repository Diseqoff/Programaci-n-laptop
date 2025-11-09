#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 1;
    }

    cout << "Los factores primos de " << numero << " son: ";

    // Primero sacamos todos los factores de 2
    while (numero % 2 == 0) {
        cout << 2 << " ";
        numero /= 2;
    }

    // Ahora sacamos los factores impares
    for (int i = 3; i * i <= numero; i += 2) {
        while (numero % i == 0) {
            cout << i << " ";
            numero /= i;
        }
    }

    // Si el número restante es mayor que 2, entonces es un número primo
    if (numero > 2) {
        cout << numero;
    }

    cout << endl;

    return 0;
}
