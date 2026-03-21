#include <iostream>
using namespace std;

class Cuenta {
private:
    int saldo;

public:
    Cuenta(int saldoInicial) {
        if (saldoInicial >= 0) {
            saldo = saldoInicial;
        } else {
            saldo = 0;
            cout << "Error: El saldo inicial era inválido. Se estableció en 0." << endl;
        }
    }
    void abonar(int monto) {
        if (monto > 0) {
            saldo += monto;
        }
    }
    void cargar(int monto) {
        if (monto > saldo) {
            cout << "El monto a cargar excede el saldo de la cuenta." << endl;
        } else {
            saldo -= monto;
        }
    }
    int obtenerSaldo() const {
        return saldo;
    }
};
int main() {
    Cuenta cuenta1(500);
    Cuenta cuenta2(-100);
    cout << "Saldo de cuenta1: " << cuenta1.obtenerSaldo() << endl;
    cout << "Saldo de cuenta2: " << cuenta2.obtenerSaldo() << endl;
    cout << "\nAbonando 200 a cuenta1..." << endl;
    cuenta1.abonar(200);
    cout << "Nuevo saldo de cuenta1: " << cuenta1.obtenerSaldo() << endl;
    cout << "\nCargando 100 a cuenta1..." << endl;
    cuenta1.cargar(100);
    cout << "Nuevo saldo de cuenta1: " << cuenta1.obtenerSaldo() << endl;
    cout << "\nIntentando cargar 600 a cuenta1..." << endl;
    cuenta1.cargar(600);
    cout << "Saldo de cuenta1: " << cuenta1.obtenerSaldo() << endl;
    cout << "\nAbonando 300 a cuenta2..." << endl;
    cuenta2.abonar(300);
    cout << "Saldo de cuenta2: " << cuenta2.obtenerSaldo() << endl;
    return 0;
}
