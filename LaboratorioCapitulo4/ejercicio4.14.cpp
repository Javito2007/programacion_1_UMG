#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cuenta;
    double saldoInicial, cargos, creditos, limite, nuevoSaldo;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Introduzca el numero de cuenta (0 -1 para salir): ";
        cin >> cuenta;
        if (cuenta == -1) break;

        cout << "Introduzca el saldo inicial: ";
        cin >> saldoInicial;
        cout << "Introduzca los cargos totales: ";
        cin >> cargos;
        cout << "Introduzca los creditos totales: ";
        cin >> creditos;
        cout << "Introduzca el limite de credito: ";
        cin >> limite;

        nuevoSaldo = saldoInicial + cargos - creditos;
        cout << "El nuevo saldo es " << nuevoSaldo << endl;

        if (nuevoSaldo > limite) {
            cout << "Cuenta: " << cuenta << endl;
            cout << "Limite de credito: " << limite << endl;
            cout << "Saldo: " << nuevoSaldo << endl;
            cout << "Se excedio el limite de su credito." << endl;
        }
        cout << endl;
    }
    return 0;
}
