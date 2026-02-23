#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    long long factorial = 1;

    cout << "Ingrese un entero no negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "El numero debe ser no negativo." << endl;
    } else {
        while (i <= n) {
            factorial *= i;
            i++;
        }
        cout << n << "! = " << factorial << endl;
    }

    return 0;
}
