#include <iostream>
using namespace std;

int main() {
    cout << "Triples de Pitagoras (lados <= 500):" << endl;
    cout << "Lado1\tLado2\tHipotenusa" << endl;
    cout << "--------------------------------" << endl;

    for (int lado1 = 1; lado1 <= 500; lado1++) {
        for (int lado2 = 1; lado2 <= 500; lado2++) {
            for (int hip = 1; hip <= 500; hip++) {
                if (lado1 * lado1 + lado2 * lado2 == hip * hip) {
                    cout << lado1 << "\t" << lado2 << "\t" << hip << endl;
                }
            }
        }
    }

    return 0;
}
