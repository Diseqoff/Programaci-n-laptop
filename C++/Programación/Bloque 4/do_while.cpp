#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int x = 11;

    do 
    {
        cout << x << endl;
        x += 1;
    } 
    while (x <= 10);

    system ("pause");
    return 0;
}
