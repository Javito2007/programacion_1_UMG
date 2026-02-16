#include<iostream>
#include<sstream>
using namespace std;

string convertiratexto(float f);

int main() {
	string cantdep;
	string cantret;
	float depcheq;
	float depefec;
	float deposito;
	int i;
	string nombre;
	string opc;
	float retiro;
	float saldof;
	float saldoi;
	float totaldep;
	float totalret;
	i = 0;
	nombre = "";
	saldoi = 0;
	saldof = saldoi;
	cantdep = "";
	depefec = 0;
	depcheq = 0;
	totaldep = 0;
	cantret = "";
	totalret = 0;
	cout << "Ingrese usuario:: " << endl;
	cin >> nombre;
	cout << "Saldo Inicial:: " << endl;
	cin >> saldoi;
	do {
		cout << "operacion que desea recibir:: " << endl;
		cout << "(D) Deposito" << endl;
		cout << "(R) Retiro" << endl;
		cout << "(F) Fin" << endl;
		cin >> opc;
		if ((opc=="D") || (opc=="d")) {
			cout << "(1) Efectivo" << endl;
			cout << "(2) Cheque" << endl;
			cin >> opc;
			if (opc=="1") {
				cout << "Ingrese monto" << endl;
				cin >> deposito;
				cout << "Operación exitosa" << endl;
				cout << "Monto depositado: " << deposito << endl;
				cantdep = cantdep+convertiratexto(deposito)+" ";
				depefec = depefec+deposito;
				saldof = saldof+depefec;
			}
			if (opc=="2") {
				cout << "Ingrese monto de Cheque" << endl;
				cin >> deposito;
				cout << "se le descontara un 1% de comisión" << endl;
				cout << "Operación exitosa" << endl;
				cout << "Monto depositado: " << (deposito-(deposito*0.01)) << endl;
				cantdep = cantdep+convertiratexto(deposito-(deposito*0.01))+",  ";
				depcheq = depcheq+(deposito-(deposito*0.01));
				saldof = saldof+depcheq;
			}
			totaldep = depefec+depcheq;
		}
		if ((opc=="R") || (opc=="r")) {
			cout << "Ingrese la cantidad que desea retirar:: " << endl;
			cin >> retiro;
			if (retiro<=saldof) {
				cout << "Operación exitosa" << endl;
				cout << "Monto Retirado: " << retiro << endl;
				cantret = cantret+convertiratexto(retiro)+",  ";
				i = i+1;
				totalret = totalret+retiro;
				saldof = saldof-retiro;
			}
			if (retiro>saldoi) {
				cout << "Sobregiro" << endl;
			}
		}
		if ((opc=="F") || (opc=="f")) {
			cout << "Nombre: " << nombre << endl;
			cout << "Saldo Inicial: " << saldoi << endl;
			cout << "Saldo Final: " << saldof+saldoi << endl;
			cout << "Depositos:: " << cantdep << endl;
			cout << "Depositos efectivo:: " << depefec << endl;
			cout << "Depositos Cheque:: " << depcheq << endl;
			cout << "Total Depositos:: " << totaldep << endl;
			cout << "Retiros:: " << cantret << endl;
			cout << "Total Retiro:: " << totalret << endl;
			if (totalret>0) {
				cout << "Promedio de retiros:: " << totalret/i << endl;
			}
		}
	} while (opc!="n");
	return 0;
}


string convertiratexto(float f) {
	stringstream ss;
	ss << f;
	return ss.str();
}

