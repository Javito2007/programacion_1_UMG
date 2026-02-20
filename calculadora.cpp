#include <iostream>
using namespace std;
float suma(float a, float b) {
    return a + b;
}
float resta(float a, float b) {
    return a - b;
}
float multiplicacion(float a, float b) {
    return a * b;
}
float division(float a, float b) {
    if (b == 0) {
        cout << "\n¡Error! No se puede dividir entre 0\n";
        return 0;
    }
    return a / b;
}
int main() {
    float num1, num2;
    int opcion;
    char continuar;
    do {
        cout << "CALCULADORA";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Elige una opcion (1-5): ";
        cin >> opcion;
        if (opcion == 5) {
            cout << "\n";
            break;
        }
        if (opcion < 1 || opcion > 5) {
            cout << "\nOpcion invalida. Intenta de nuevo.\n";
            continue;
        }
        cout << "\nIngresa el primer numero: ";
        cin >> num1;
        cout << "Ingresa el segundo numero: ";
        cin >> num2;
        cout << "\nResultado: ";

        switch (opcion) {
            case 1:
                cout << num1 << " + " << num2 << " = " << suma(num1, num2) << endl;
                break;
            case 2:
                cout << num1 << " - " << num2 << " = " << resta(num1, num2) << endl;
                break;
            case 3:
                cout << num1 << " * " << num2 << " = " << multiplicacion(num1, num2) << endl;
                break;
            case 4:
                cout << num1 << " / " << num2 << " = " << division(num1, num2) << endl;
                break;
        }

        cout << "\n¿Quieres hacer otra operacion? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
