#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese tres valores (lados de un posible triangulo): ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Los lados deben ser valores positivos." << endl;
    }
    else if (a + b > c && a + c > b && b + c > a) {
        cout << "Pueden representar los lados de un triangulo." << endl;
    } else {
        cout << "No pueden representar los lados de un triangulo." << endl;
    }

    return 0;
}
