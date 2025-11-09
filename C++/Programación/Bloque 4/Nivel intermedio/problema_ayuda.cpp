#include <iostream>
#include <cstring> // para usar strcmp

using namespace std;

int main() {
    char input[100]; // Buffer para la entrada del usuario
    const char exitWord[] = "exit"; // Palabra de salida

    cout << "Introduce palabras. Escribe 'exit' para terminar el programa." << endl;

    while (true) {
        cout << "Ingrese una palabra: ";
        cin >> input;

        // Comparar la entrada con la palabra de salida
        if (strcmp(input, exitWord) == 0) {
            break;
        }

        // Mostrar la palabra ingresada
        cout << "Usted ingresó: " << input << endl;
    }

    cout << "Programa terminado." << endl;

    return 0;
}

