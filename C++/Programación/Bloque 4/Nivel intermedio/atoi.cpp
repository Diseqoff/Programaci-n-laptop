#include <iostream>
#include <cstdlib>  // Necesario para usar atoi

using namespace std;

int main() {
    char str1[] = "12345";
    char str2[] = "42";
    char str3[] = "hello";
    
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);  // Esto típicamente devolverá 0
    
    cout << "El número 1 es: " << num1 << endl;  // Salida: El número 1 es: 12345
    cout << "El número 2 es: " << num2 << endl;  // Salida: El número 2 es: 42
    cout << "El número 3 es: " << num3 << endl;  // Salida: El número 3 es: 0
    
    return 0;
}
