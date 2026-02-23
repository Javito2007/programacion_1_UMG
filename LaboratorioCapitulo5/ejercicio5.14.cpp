#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int producto, cantidad;
    double totalGeneral = 0.0;

    cout << "Ingrese numero de producto y cantidad vendida" << endl;
    cout << "(Producto 0 0 para terminar):" << endl;

    for (;;) {
        cin >> producto >> cantidad;

        if (producto == 0) {
            break;
        }

        double precio = 0.0;

        if (producto == 1) {
            precio = 2.98;
        } else if (producto == 2) {
            precio = 4.50;
        } else if (producto == 3) {
            precio = 9.98;
        } else if (producto == 4) {
            precio = 4.49;
        } else if (producto == 5) {
            precio = 6.87;
        } else {
            cout << "Producto no valido" << endl;
            continue;
        }

        double totalProducto = precio * cantidad;
        totalGeneral += totalProducto;

        cout << fixed << setprecision(2);
        cout << "Producto " << producto << ": $" << totalProducto << endl;
    }

    cout << "Total general de ventas: $" << fixed << setprecision(2) << totalGeneral << endl;
    return 0;
}
