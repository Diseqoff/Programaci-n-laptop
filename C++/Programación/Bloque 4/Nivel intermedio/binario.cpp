#include <iostream>
using namespace std;

int main() {
    int valor_ascii ;
    char letra ; // Ejemplo de letra
    cout<<"Digite el una letra: ";
    cin>>letra;

    valor_ascii = static_cast<int>(letra); // Convertir letra a su valor ASCII

    cout << "Valor ASCII de " << letra << ": " << valor_ascii << endl; // Mostrar el valor ASCII antes del bucle

    cout << "Valor binario de " << letra << ": ";
    for (int i = 7; i >= 0; --i) {
        cout << ((valor_ascii >> i) & 1);
    }
    cout << endl;

    return 0;
}
