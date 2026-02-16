#include <iostream>
using namespace std;

int main() {
    int opcion;
    double peso, altura, bmi;
    
    cout << "CALCULADORA DE INDICE DE MASA CORPORAL (BMI)" << endl;
    cout << "1. Usar libras y pulgadas" << endl;
    cout << "2. Usar kilogramos y metros" << endl;
    cout << "Elija una opcion (1 o 2): ";
    cin >> opcion;
    
    if (opcion == 1) {
        cout << "Ingrese su peso en libras: ";
        cin >> peso;
        cout << "Ingrese su altura en pulgadas: ";
        cin >> altura;
        bmi = (peso * 703) / (altura * altura);
    } else {
        cout << "Ingrese su peso en kilogramos: ";
        cin >> peso;
        cout << "Ingrese su altura en metros: ";
        cin >> altura;
        bmi = peso / (altura * altura);
    }
    
    cout << "Su BMI es: " << bmi << endl;
    cout << "VALORES DE BMI:" << endl;
    cout << "Bajo peso: menos de 18.5" << endl;
    cout << "Normal: entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: entre 25 y 29.9" << endl;
    cout << "Obeso: 30 o mas" << endl;
    
    cout << "\nClasificacion: ";
    if (bmi < 18.5) {
        cout << "Bajo peso" << endl;
    } else if (bmi < 25) {
        cout << "Normal" << endl;
    } else if (bmi < 30) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obeso" << endl;
    }
    
    return 0;
}