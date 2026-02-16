#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un entero de cinco digitos: ";
    cin >> numero;
    
    int d1 = numero / 10000;              // Primer dígito
    int d2 = (numero / 1000) % 10;        // Segundo dígito
    int d3 = (numero / 100) % 10;         // Tercer dígito
    int d4 = (numero / 10) % 10;          // Cuarto dígito
    int d5 = numero % 10;                  // Quinto dígito
    
    cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;
    
    return 0;
}