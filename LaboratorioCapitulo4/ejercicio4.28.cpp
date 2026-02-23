#include <iostream>
using namespace std;

int main() {
    int fila = 1;

    while (fila <= 8) {
        int columna = 1;

        if (fila % 2 == 0)
            cout << " ";

        while (columna <= 8) {
            cout << "* ";
            columna++;
        }

        cout << endl;
        fila++;
    }

    return 0;
}
