// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int horadeldia;
	cout << "Escribir hora del día (0-23):: " << endl;
	cin >> horadeldia;
	if ((0<=horadeldia) && (horadeldia<=5)) {
		cout << "Madrugada" << endl;
	} else {
		if ((6<=horadeldia) && (horadeldia<=11)) {
			cout << "Mañana" << endl;
		} else {
			if ((12<=horadeldia) && (horadeldia<=13)) {
				cout << "Mediodía" << endl;
			} else {
				if ((14<=horadeldia) && (horadeldia<=19)) {
					cout << "Tarde" << endl;
				} else {
					if ((20<=horadeldia) && (horadeldia<=23)) {
						cout << "Noche" << endl;
					} else {
						cout << "Error" << endl;
					}
				}
			}
		}
	}
	return 0;
}

