#include <iostream>
using namespace std;

int main() {
    for (int dia = 1; dia <= 12; dia++) {
        cout << "En el ";

        switch (dia) {
            case 1: cout << "primer"; break;
            case 2: cout << "segundo"; break;
            case 3: cout << "tercer"; break;
            case 4: cout << "cuarto"; break;
            case 5: cout << "quinto"; break;
            case 6: cout << "sexto"; break;
            case 7: cout << "septimo"; break;
            case 8: cout << "octavo"; break;
            case 9: cout << "noveno"; break;
            case 10: cout << "decimo"; break;
            case 11: cout << "undecimo"; break;
            case 12: cout << "duodecimo"; break;
        }

        cout << " dia de Navidad" << endl;
        cout << "Mi amor verdadero me dio" << endl;

        switch (dia) {
            case 12: cout << "Doce tamborileros tamboreando" << endl;
            case 11: cout << "Once gaiteros tocando" << endl;
            case 10: cout << "Diez senores saltando" << endl;
            case 9: cout << "Nueve damas bailando" << endl;
            case 8: cout << "Ocho criadas ordenando" << endl;
            case 7: cout << "Siete cisnes nadando" << endl;
            case 6: cout << "Seis gansos" << endl;
            case 5: cout << "Cinco anillos de oro" << endl;
            case 4: cout << "Cuatro pajaros llamadores" << endl;
            case 3: cout << "Tres gallinas francesas" << endl;
            case 2: cout << "Dos tortolas" << endl;
            case 1: cout << "Una perdiz en un peral" << endl;
        }

        cout << endl;
    }

    return 0;
}
