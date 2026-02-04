Algoritmo contadordeDinero
	Definir monto, resto Como Real
	Definir b100, b50, b20, b10, b5 Como Entero
	Definir m1, m050, m025, m010, m005 Como Entero
	Escribir 'Monto a Ingresar:: '
	Leer monto
	monto <- Redon(monto*100)/100
	resto <- monto
	b100 <- Trunc(resto/100)
	resto <- resto-b100*100
	b50 <- Trunc(resto/50)
	resto <- resto-b50*50
	b20 <- Trunc(resto/20)
	resto <- resto-b20*20
	b10 <- Trunc(resto/10)
	resto <- resto-b10*10
	b5 <- Trunc(resto/5)
	resto <- resto-b5*5
	resto <- Redon(resto*100)
	m1 <- Trunc(resto/100)
	resto <- resto MOD 100
	m050 <- Trunc(resto/50)
	resto <- resto MOD 50
	m025 <- Trunc(resto/25)
	resto <- resto MOD 25
	m010 <- Trunc(resto/10)
	resto <- resto MOD 10
	m005 <- Trunc(resto/5)
	Escribir 'Necesitas::'
	Si b100>0 Entonces
		Escribir b100, ' de Q100'
	FinSi
	Si b50>0 Entonces
		Escribir b50, ' de Q50'
	FinSi
	Si b20>0 Entonces
		Escribir b20, ' de Q20'
	FinSi
	Si b10>0 Entonces
		Escribir b10, ' de Q10'
	FinSi
	Si b5>0 Entonces
		Escribir b5, ' de Q5'
	FinSi
	Si m1>0 Entonces
		Escribir m1, ' de Q1'
	FinSi
	Si m050>0 Entonces
		Escribir m050, ' de Q0.50'
	FinSi
	Si m025>0 Entonces
		Escribir m025, ' de Q0.25'
	FinSi
	Si m010>0 Entonces
		Escribir m010, ' de Q0.10'
	FinSi
	Si m005>0 Entonces
		Escribir m005, ' de Q0.05'
	FinSi
FinAlgoritmo
