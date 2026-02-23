#include <iostream>
using namespace std;

int main() {
    int factorial = 1;

    cout << "Numero" << "\t" << "Factorial" << endl;
    cout << "----------------" << endl;

    for (int i = 1; i <= 5; i++) {
        factorial = factorial * i;
        cout << i << "\t" << factorial << endl;
    }

    return 0;
}
