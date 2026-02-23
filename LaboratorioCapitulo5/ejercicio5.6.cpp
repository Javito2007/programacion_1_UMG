#include <iostream>
using namespace std;
int main() {
    int numero, suma = 0, contador = 0;
    cout << "Ingrese números enteros (termine con 9999):" << endl;
    for (;;) {
        cin >> numero;
        if (numero == 9999) {
            break;
        }
        suma += numero;
        contador++;
    }
    if (contador > 0) {
        double promedio = static_cast<double>(suma) / contador;
        cout << "El promedio de los " << contador << " números es: " << promedio << endl;
    } else {
        cout << "No se ingresaron números válidos antes del centinela." << endl;
    }
    return 0;
}
