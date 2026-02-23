#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int terminos, i = 1;
    long long factorial = 1;
    double e = 1.0;

    cout << "Ingrese el numero de terminos a usar: ";
    cin >> terminos;

    while (i < terminos) {
        factorial *= i;          // calcula i!
        e += 1.0 / factorial;
        i++;
    }

    cout << fixed << setprecision(10);
    cout << "Valor aproximado de e: " << e << endl;

    return 0;
}
