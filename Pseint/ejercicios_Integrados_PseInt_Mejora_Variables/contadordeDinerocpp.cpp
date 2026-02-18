// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int billete10;
	int billete100;
	int billete20;
	int billete5;
	int billete50;
	int moneda005;
	int moneda010;
	int moneda025;
	int moneda050;
	int moneda1;
	float montoingresado;
	int restodemonto;
	cout << "Monto a Ingresar:: " << endl;
	cin >> montoingresado;
	montoingresado = int((montoingresado*100)+.5)/100;
	restodemonto = montoingresado;
	billete100 = int(restodemonto/100);
	restodemonto = restodemonto-billete100*100;
	billete50 = int(restodemonto/50);
	restodemonto = restodemonto-billete50*50;
	billete20 = int(restodemonto/20);
	restodemonto = restodemonto-billete20*20;
	billete10 = int(restodemonto/10);
	restodemonto = restodemonto-billete10*10;
	billete5 = int(restodemonto/5);
	restodemonto = restodemonto-billete5*5;
	restodemonto = int((restodemonto*100)+.5);
	moneda1 = int(restodemonto/100);
	restodemonto = restodemonto%100;
	moneda050 = int(restodemonto/50);
	restodemonto = restodemonto%50;
	moneda025 = int(restodemonto/25);
	restodemonto = restodemonto%25;
	moneda010 = int(restodemonto/10);
	restodemonto = restodemonto%10;
	moneda005 = int(restodemonto/5);
	cout << "Necesitas::" << endl;
	if (billete100>0) {
		cout << billete100 << " de Q100" << endl;
	}
	if (billete50>0) {
		cout << billete50 << " de Q50" << endl;
	}
	if (billete20>0) {
		cout << billete20 << " de Q20" << endl;
	}
	if (billete10>0) {
		cout << billete10 << " de Q10" << endl;
	}
	if (billete5>0) {
		cout << billete5 << " de Q5" << endl;
	}
	if (moneda1>0) {
		cout << moneda1 << " de Q1" << endl;
	}
	if (moneda050>0) {
		cout << moneda050 << " de Q0.50" << endl;
	}
	if (moneda025>0) {
		cout << moneda025 << " de Q0.25" << endl;
	}
	if (moneda010>0) {
		cout << moneda010 << " de Q0.10" << endl;
	}
	if (moneda005>0) {
		cout << moneda005 << " de Q0.05" << endl;
	}
	return 0;
}

