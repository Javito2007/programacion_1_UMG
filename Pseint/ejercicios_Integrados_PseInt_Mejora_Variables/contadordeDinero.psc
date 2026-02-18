Algoritmo contadordeDinero
	Definir montoIngresado, restoDeMonto Como Real
	Definir billete100, billete50, billete20, billete10, billete5 Como Entero
	Definir moneda1, moneda050, moneda025, moneda010, moneda005 Como Entero
	Escribir 'Monto a Ingresar:: '
	Leer montoIngresado
	montoIngresado <- Redon(montoIngresado*100)/100
	restoDeMonto <- montoIngresado
	billete100 <- Trunc(restoDeMonto/100)
	restoDeMonto <- restoDeMonto-billete100*100
	billete50 <- Trunc(restoDeMonto/50)
	restoDeMonto <- restoDeMonto-billete50*50
	billete20 <- Trunc(restoDeMonto/20)
	restoDeMonto <- restoDeMonto-billete20*20
	billete10 <- Trunc(restoDeMonto/10)
	restoDeMonto <- restoDeMonto-billete10*10
	billete5 <- Trunc(restoDeMonto/5)
	restoDeMonto <- restoDeMonto-billete5*5
	restoDeMonto <- Redon(restoDeMonto*100)
	moneda1 <- Trunc(restoDeMonto/100)
	restoDeMonto <- restoDeMonto MOD 100
	moneda050 <- Trunc(restoDeMonto/50)
	restoDeMonto <- restoDeMonto MOD 50
	moneda025 <- Trunc(restoDeMonto/25)
	restoDeMonto <- restoDeMonto MOD 25
	moneda010 <- Trunc(restoDeMonto/10)
	restoDeMonto <- restoDeMonto MOD 10
	moneda005 <- Trunc(restoDeMonto/5)
	Escribir 'Necesitas::'
	Si billete100>0 Entonces
		Escribir billete100, ' de Q100'
	FinSi
	Si billete50>0 Entonces
		Escribir billete50, ' de Q50'
	FinSi
	Si billete20>0 Entonces
		Escribir billete20, ' de Q20'
	FinSi
	Si billete10>0 Entonces
		Escribir billete10, ' de Q10'
	FinSi
	Si billete5>0 Entonces
		Escribir billete5, ' de Q5'
	FinSi
	Si moneda1>0 Entonces
		Escribir moneda1, ' de Q1'
	FinSi
	Si moneda050>0 Entonces
		Escribir moneda050, ' de Q0.50'
	FinSi
	Si moneda025>0 Entonces
		Escribir moneda025, ' de Q0.25'
	FinSi
	Si moneda010>0 Entonces
		Escribir moneda010, ' de Q0.10'
	FinSi
	Si moneda005>0 Entonces
		Escribir moneda005, ' de Q0.05'
	FinSi
FinAlgoritmo
