Algoritmo AporteSindicato
	Definir edad Como Entero
	Definir salario, calculo Como Real
	
	Escribir 'Ingresar edad'
	Leer edad
	Escribir 'Ingresar salario'
	Leer salario
	
	si (salario<10000) Entonces
		calculo=salario*0.005
	SiNo
		si (10000<=salario) Y (salario<=19999) Entonces
			calculo=salario*0.01
		SiNo
			si (20000<=salario) Y (salario<=29999) Entonces
				calculo=salario*0.02
			SiNo
				si (salario>=30000) Entonces
					calculo=salario*0.025
				FinSi
			FinSi
		FinSi
	FinSi
	si edad<=30 Entonces
		calculo=calculo + (calculo*0.2)
	FinSi
	Escribir 'el aporte es:: ', calculo

FinAlgoritmo
