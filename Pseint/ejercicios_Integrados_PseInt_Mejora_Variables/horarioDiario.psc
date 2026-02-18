Algoritmo horarioDiario
	Definir horaDelDia Como Entero
	Escribir 'Escribir hora del día (0-23):: '
	Leer horaDelDia
	si (0<=horaDelDia) Y (horaDelDia<=5) Entonces
		Escribir 'Madrugada'
	SiNo
		si (6<=horaDelDia) Y (horaDelDia<=11) Entonces
			Escribir 'Mañana'
		SiNo
			si (12<=horaDelDia) Y (horaDelDia<=13) Entonces
				Escribir 'Mediodía'
			SiNo
				si (14<=horaDelDia) Y (horaDelDia<=19) Entonces
					Escribir 'Tarde'
				SiNo
					si (20<=horaDelDia) Y (horaDelDia<=23) Entonces
						Escribir 'Noche'
					SiNo
						Escribir 'Error'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo