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
	float calculodeaporte;
	int edadusuario;
	float salariousuario;
	cout << "Ingresar edad" << endl;
	cin >> edadusuario;
	cout << "Ingresar salario" << endl;
	cin >> salariousuario;
	if ((salariousuario<10000)) {
		calculodeaporte = salariousuario*0.005;
	} else {
		if ((10000<=salariousuario) && (salariousuario<=19999)) {
			calculodeaporte = salariousuario*0.01;
		} else {
			if ((20000<=salariousuario) && (salariousuario<=29999)) {
				calculodeaporte = salariousuario*0.02;
			} else {
				if ((salariousuario>=30000)) {
					calculodeaporte = salariousuario*0.025;
				}
			}
		}
	}
	if (edadusuario<=30) {
		calculodeaporte = calculodeaporte+(calculodeaporte*0.2);
	}
	cout << "el aporte es:: " << calculodeaporte << endl;
	return 0;
}

