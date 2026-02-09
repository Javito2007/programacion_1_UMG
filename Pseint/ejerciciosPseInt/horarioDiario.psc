Algoritmo horarioDiario
	Definir hora Como Entero
	Escribir 'Escribir hora del día (0-23):: '
	Leer hora
	si (0<=hora) Y (hora<=5) Entonces
		Escribir 'Madrugada'
	SiNo
		si (6<=hora) Y (hora<=11) Entonces
			Escribir 'Mañana'
		SiNo
			si (12<=hora) Y (hora<=13) Entonces
				Escribir 'Mediodía'
			SiNo
				si (14<=hora) Y (hora<=19) Entonces
					Escribir 'Tarde'
				SiNo
					si (20<=hora) Y (hora<=23) Entonces
						Escribir 'Noche'
					SiNo
						Escribir 'Error'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo