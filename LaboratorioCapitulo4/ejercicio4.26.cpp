#include <iostream>
using namespace std;

int main() {
    int numero, original, digito1, digito2, digito4, digito5;

    cout << "Ingrese un numero de 5 digitos: ";
    cin >> numero;

    original = numero;

    digito1 = numero / 10000;
    digito2 = (numero / 1000) % 10;
    digito4 = (numero / 10) % 10;
    digito5 = numero % 10;

    if (digito1 == digito5 && digito2 == digito4)
        cout << original << " es un palindromo." << endl;
    else
        cout << original << " no es un palindromo." << endl;

    return 0;
}
