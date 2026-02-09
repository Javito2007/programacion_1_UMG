Algoritmo MaxMIn
	Definir N Como Entero
	Definir max Como Real
	Definir min Como Real
	Definir valor Como Real
	Definir i Como Entero
	Escribir 'Cuantos numeros desea ingresar: '
	Leer N
	i <- 1
	Mientras i<=N Hacer
		Escribir 'Ingrese un valor: '
		Leer valor
		Si i=1 Entonces
			min <- valor
			max <- valor
		SiNo
			Si valor<min Entonces
				min <- valor
			FinSi
			Si valor>max Entonces
				max <- valor
			FinSi
		FinSi
		i <- i+1
	FinMientras
	Escribir 'El valor maximo es:: ', max
	Escribir 'El valor minimo es:: ', min
FinAlgoritmo
