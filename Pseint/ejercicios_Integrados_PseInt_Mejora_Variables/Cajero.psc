Algoritmo Cajero
	Definir nombreUsuario, opcDesicion Como Caracter
	Definir saldoIni, saldoFin, depositoCajero, retiroCajero, totalDeposito, totalRetiro, depEfectivo, depCheque Como Real
	Definir cantDeposito, cantRetiro Como Caracter
	Definir i Como Entero
	
	i<-0
	nombreUsuario<-''
	saldoIni<-0
	saldoFin<-saldoIni
	cantDeposito<-''
	depEfectivo<-0
	depCheque<-0
	totalDeposito<-0
	cantRetiro<-''
	totalRetiro<-0
	
	Escribir 'Ingrese usuario:: '
	Leer nombreUsuario
	Escribir 'Saldo Inicial:: '
	Leer saldoIni
	
	Repetir
		Escribir 'operacion que desea recibir:: '
		Escribir '(D) Deposito'
		Escribir '(R) Retiro'
		Escribir '(F) Fin'
		Leer opcDesicion
		si (opcDesicion="D") o (opcDesicion='d') Entonces
			Escribir '(1) Efectivo'
			Escribir '(2) Cheque'
			Leer opcDesicion
			si opcDesicion='1'
				Escribir 'Ingrese monto'
				Leer depositoCajero
				Escribir 'Operación exitosa'
				Escribir 'Monto depositado: ', depositoCajero
				cantDeposito=cantDeposito+ConvertirATexto(depositoCajero)+' '
				depEfectivo=depEfectivo+depositoCajero
				saldoFin = saldoFin+depEfectivo
			FinSi
			si opcDesicion='2'
				Escribir 'Ingrese monto de Cheque'
				Leer depositoCajero
				Escribir 'se le descontara un 1% de comisión'
				Escribir 'Operación exitosa'
				Escribir 'Monto depositado: ', (depositoCajero- (depositoCajero*0.01))
				cantDeposito=cantDeposito+ConvertirATexto(depositoCajero- (depositoCajero*0.01))+',  '
				depCheque=depCheque+(depositoCajero- (depositoCajero*0.01))
				saldoFin = saldoFin+depCheque
			FinSi
			totalDeposito = depEfectivo + depCheque
		FinSi
		si (opcDesicion='R') O (opcDesicion='r') Entonces
			Escribir 'Ingrese la cantidad que desea retirar:: '
			Leer retiroCajero
			si retiroCajero <= saldoFin Entonces
				Escribir 'Operación exitosa'
				Escribir 'Monto Retirado: ', retiroCajero
				cantRetiro=cantRetiro+ConvertirATexto(retiroCajero)+',  '
				i=i+1
				totalRetiro=totalRetiro+retiroCajero
				saldoFin=saldoFin-retiroCajero
			FinSi
			si retiroCajero>saldoIni
				Escribir 'Sobregiro'
			FinSi
		FinSi
		si (opcDesicion='F')O(opcDesicion='f') Entonces
			Escribir 'Nombre: ', nombreUsuario
			Escribir 'Saldo Inicial: ', saldoIni
			Escribir 'Saldo Final: ', saldoFin + saldoIni
			Escribir 'Depositos:: ', cantDeposito
			Escribir 'Depositos efectivo:: ', depEfectivo
			Escribir 'Depositos Cheque:: ', depCheque
			Escribir 'Total Depositos:: ', totalDeposito
			Escribir 'Retiros:: ', cantRetiro
			Escribir 'Total Retiro:: ', totalRetiro
			si totalRetiro>0 Entonces
				Escribir 'Promedio de retiros:: ', totalRetiro/i
			FinSi
		FinSi
		
	Hasta Que opcDesicion='n'
FinAlgoritmo
