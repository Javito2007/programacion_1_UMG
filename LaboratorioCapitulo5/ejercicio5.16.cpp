#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int principal = 100000;
    int tasa = 5;

    cout << "Anio" << setw(21) << "Monto en deposito" << endl;
    cout << fixed << setprecision(2);

    for (int anio = 1; anio <= 10; anio++) {
        int monto = principal;
        for (int i = 1; i <= anio; i++) {
            monto = monto + (monto * tasa / 100);
        }

        int dolares = monto / 100;
        int centavos = monto % 100;

        cout << setw(4) << anio << setw(15) << dolares << "."
             << (centavos < 10 ? "0" : "") << centavos << endl;
    }

    return 0;
}
