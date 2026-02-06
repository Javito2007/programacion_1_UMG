Algoritmo menuCafeteria
	Definir add, opc, coffeOpc, SnackOpc, TeaOpc Como Cadena
	Definir precio Como Real
	Definir productos Como Cadena
	productos <- ''
	precio <- 0
	Escribir '******* Bienvenido a la cafetería *******'
	Escribir 'Seleccionar area del menú:: '
	Escribir '1. Cafe'
	Escribir '2. Snacks'
	Escribir '3. Té'
	Escribir '4. Cancelar orden'
	Leer opc
	Repetir
		Si opc='1' Entonces
			Escribir '1. espresso - Q20'
			Escribir '2. latte - Q22'
			Escribir '3. Cappuccino - Q25'
			Leer coffeOpc
			Si coffeOpc='1' Entonces
				precio <- precio+20
				productos <- productos+', espresso-Q20'
			FinSi
			Si coffeOpc='2' Entonces
				precio <- precio+22
				productos <- productos+', late-Q22'
			FinSi
			Si coffeOpc='3' Entonces
				precio <- precio+25
				productos <- productos+', Cappuccino-Q25'
			FinSi
		FinSi
		Si opc='2' Entonces
			Escribir '1. popcorn - Q10'
			Escribir '2. Yougurt - Q20'
			Escribir '3. Chips - Q25'
			Leer SnackOpc
			Si SnackOpc='1' Entonces
				precio <- precio+10
				productos <- productos+', popcorn-Q10'
			FinSi
			Si SnackOpc='2' Entonces
				precio <- precio+20
				productos <- productos+', Yougurt - Q20'
			FinSi
			Si SnackOpc='3' Entonces
				precio <- precio+25
				productos <- productos+', Chips - Q25'
			FinSi
		FinSi
		Si opc='3' Entonces
			Escribir '1. black tea - Q15'
			Escribir '2. green tea - Q18'
			Escribir '3. herbal tea - Q20'
			Leer TeaOpc
			Si TeaOpc='1' Entonces
				precio <- precio+15
				productos <- productos+', black tea - Q15'
			FinSi
			Si TeaOpc='2' Entonces
				precio <- precio+18
				productos <- productos+', green tea - Q18'
			FinSi
			Si TeaOpc='3' Entonces
				precio <- precio+20
				productos <- productos+', herbal tea - Q20'
			FinSi
		FinSi
		Si opc='4' Entonces
			precio <- 0
			productos <- 'vacío'
		FinSi
		Escribir 'deseas algo mas y/n:: '
		Leer add
		Si add='y' Entonces
			Escribir '******* Bienvenido a la cafetería *******'
			Escribir 'Seleccionar area del menú:: '
			Escribir '1. Cafe'
			Escribir '2. Snacks'
			Escribir '3. Té'
			Escribir '4. Cancelar orden'
			Leer opc
		FinSi
		Si add='n' Entonces
			Escribir productos
			Escribir 'total de factura:: ', precio
		FinSi
	Hasta Que add='n' O opc='4'
FinAlgoritmo
