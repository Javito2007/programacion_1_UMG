Algoritmo contadordeDinero
	Definir monto, resto Como Real
	Definir bill100, bill50, bill20, bill10, bill5 Como Entero
	Definir mon1, mon050, mon025, mon010, mon005 Como Entero
	Escribir 'Monto a Ingresar:: '
	Leer monto
	monto <- Redon(monto*100)/100
	resto <- monto
	bill100 <- Trunc(resto/100)
	resto <- resto-b100*100
	bill50 <- Trunc(resto/50)
	resto <- resto-b50*50
	bill20 <- Trunc(resto/20)
	resto <- resto-b20*20
	bill10 <- Trunc(resto/10)
	resto <- resto-b10*10
	bill5 <- Trunc(resto/5)
	resto <- resto-b5*5
	resto <- Redon(resto*100)
	mon1 <- Trunc(resto/100)
	resto <- resto MOD 100
	mon050 <- Trunc(resto/50)
	resto <- resto MOD 50
	mon025 <- Trunc(resto/25)
	resto <- resto MOD 25
	mon010 <- Trunc(resto/10)
	resto <- resto MOD 10
	mon005 <- Trunc(resto/5)
	Escribir 'Necesitas::'
	Si bill100>0 Entonces
		Escribir b100, ' de Q100'
	FinSi
	Si bill50>0 Entonces
		Escribir b50, ' de Q50'
	FinSi
	Si bill20>0 Entonces
		Escribir b20, ' de Q20'
	FinSi
	Si bill10>0 Entonces
		Escribir b10, ' de Q10'
	FinSi
	Si bill5>0 Entonces
		Escribir b5, ' de Q5'
	FinSi
	Si mon1>0 Entonces
		Escribir m1, ' de Q1'
	FinSi
	Si mon050>0 Entonces
		Escribir m050, ' de Q0.50'
	FinSi
	Si mon025>0 Entonces
		Escribir m025, ' de Q0.25'
	FinSi
	Si mon010>0 Entonces
		Escribir m010, ' de Q0.10'
	FinSi
	Si mon005>0 Entonces
		Escribir m005, ' de Q0.05'
	FinSi
FinAlgoritmo
