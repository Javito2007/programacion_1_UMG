Algoritmo AporteSindicato
	Definir edadUsuario Como Entero
	Definir salarioUsuario, calculoDeAporte Como Real
	
	Escribir 'Ingresar edad'
	Leer edadUsuario
	Escribir 'Ingresar salario'
	Leer salarioUsuario
	
	si (salarioUsuario<10000) Entonces
		calculoDeAporte=salarioUsuario*0.005
	SiNo
		si (10000<=salarioUsuario) Y (salarioUsuario<=19999) Entonces
			calculoDeAporte=salarioUsuario*0.01
		SiNo
			si (20000<=salarioUsuario) Y (salarioUsuario<=29999) Entonces
				calculoDeAporte=salarioUsuario*0.02
			SiNo
				si (salarioUsuario>=30000) Entonces
					calculoDeAporte=salarioUsuario*0.025
				FinSi
			FinSi
		FinSi
	FinSi
	si edadUsuario<=30 Entonces
		calculoDeAporte=calculoDeAporte + (calculoDeAporte*0.2)
	FinSi
	Escribir 'el aporte es:: ', calculoDeAporte

FinAlgoritmo
