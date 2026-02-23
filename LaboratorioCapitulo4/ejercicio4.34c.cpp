#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int terminos, i = 1;
    long long factorial = 1;
    double x, potencia = 1.0, e_x = 1.0;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el numero de terminos a usar: ";
    cin >> terminos;

    while (i < terminos) {
        factorial *= i;
        potencia *= x;
        e_x += potencia / factorial;
        i++;
    }

    cout << fixed << setprecision(10);
    cout << "Valor aproximado de e^" << x << ": " << e_x << endl;

    return 0;
}
