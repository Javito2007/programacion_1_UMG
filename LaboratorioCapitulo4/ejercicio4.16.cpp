#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int horas;
    double tarifa, salario;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Introduzca las horas trabajadas (-1 para salir): ";
        cin >> horas;
        if (horas == -1) break;

        cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
        cin >> tarifa;

        if (horas <= 40) {
            salario = horas * tarifa;
        } else {
            salario = 40 * tarifa + (horas - 40) * tarifa * 1.5;
        }

        cout << "El salario es $" << salario << endl << endl;
    }
    return 0;
}
