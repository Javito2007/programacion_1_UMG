#include <iostream>
using namespace std;

int main() {
    int cantidad, numero, menor;

    cout << "Ingrese la cantidad de numeros a evaluar: ";
    cin >> cantidad;

    cout << "Ingrese los " << cantidad << " numeros:" << endl;

    for (int i = 0; i < cantidad; i++) {
        cin >> numero;

        if (i == 0) {
            menor = numero;
        }
        else if (numero < menor) {
            menor = numero;
        }
    }

    cout << "El numero mas pequeno es: " << menor << endl;

    return 0;
}
