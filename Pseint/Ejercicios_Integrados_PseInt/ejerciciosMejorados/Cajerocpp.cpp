// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<sstream>
using namespace std;

// No hay en el C++ estandar una funcion equivalente a "convertiratexto", pero puede programarse una equivalente.
string convertiratexto(float f);

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	string cantdeposito;
	string cantretiro;
	float depcheque;
	float depefectivo;
	float depositocajero;
	int i;
	string nombreusuario;
	string opcdesicion;
	float retirocajero;
	float saldofin;
	float saldoini;
	float totaldeposito;
	float totalretiro;
	i = 0;
	nombreusuario = "";
	saldoini = 0;
	saldofin = saldoini;
	cantdeposito = "";
	depefectivo = 0;
	depcheque = 0;
	totaldeposito = 0;
	cantretiro = "";
	totalretiro = 0;
	cout << "Ingrese usuario:: " << endl;
	cin >> nombreusuario;
	cout << "Saldo Inicial:: " << endl;
	cin >> saldoini;
	do {
		cout << "operacion que desea recibir:: " << endl;
		cout << "(D) Deposito" << endl;
		cout << "(R) Retiro" << endl;
		cout << "(F) Fin" << endl;
		cin >> opcdesicion;
		if ((opcdesicion=="D") || (opcdesicion=="d")) {
			cout << "(1) Efectivo" << endl;
			cout << "(2) Cheque" << endl;
			cin >> opcdesicion;
			if (opcdesicion=="1") {
				cout << "Ingrese monto" << endl;
				cin >> depositocajero;
				cout << "Operación exitosa" << endl;
				cout << "Monto depositado: " << depositocajero << endl;
				cantdeposito = cantdeposito+convertiratexto(depositocajero)+" ";
				depefectivo = depefectivo+depositocajero;
				saldofin = saldofin+depefectivo;
			}
			if (opcdesicion=="2") {
				cout << "Ingrese monto de Cheque" << endl;
				cin >> depositocajero;
				cout << "se le descontara un 1% de comisión" << endl;
				cout << "Operación exitosa" << endl;
				cout << "Monto depositado: " << (depositocajero-(depositocajero*0.01)) << endl;
				cantdeposito = cantdeposito+convertiratexto(depositocajero-(depositocajero*0.01))+",  ";
				depcheque = depcheque+(depositocajero-(depositocajero*0.01));
				saldofin = saldofin+depcheque;
			}
			totaldeposito = depefectivo+depcheque;
		}
		if ((opcdesicion=="R") || (opcdesicion=="r")) {
			cout << "Ingrese la cantidad que desea retirar:: " << endl;
			cin >> retirocajero;
			if (retirocajero<=saldofin) {
				cout << "Operación exitosa" << endl;
				cout << "Monto Retirado: " << retirocajero << endl;
				cantretiro = cantretiro+convertiratexto(retirocajero)+",  ";
				i = i+1;
				totalretiro = totalretiro+retirocajero;
				saldofin = saldofin-retirocajero;
			}
			if (retirocajero>saldoini) {
				cout << "Sobregiro" << endl;
			}
		}
		if ((opcdesicion=="F") || (opcdesicion=="f")) {
			cout << "Nombre: " << nombreusuario << endl;
			cout << "Saldo Inicial: " << saldoini << endl;
			cout << "Saldo Final: " << saldofin+saldoini << endl;
			cout << "Depositos:: " << cantdeposito << endl;
			cout << "Depositos efectivo:: " << depefectivo << endl;
			cout << "Depositos Cheque:: " << depcheque << endl;
			cout << "Total Depositos:: " << totaldeposito << endl;
			cout << "Retiros:: " << cantretiro << endl;
			cout << "Total Retiro:: " << totalretiro << endl;
			if (totalretiro>0) {
				cout << "Promedio de retiros:: " << totalretiro/i << endl;
			}
		}
	} while (opcdesicion!="n");
	return 0;
}


string convertiratexto(float f) {
	stringstream ss;
	ss << f;
	return ss.str();
}

