Algoritmo precioTerreno
	Definir anchoTerreno, largoTerreno, precioDeTerreno, areaTerreno, perimetroTerreno, metrosAlambre Como Real
	Escribir 'Ancho (m):: '
	Leer anchoTerreno
	Escribir 'largo (m):: '
	Leer largoTerreno
	areaTerreno<-anchoTerreno*largoTerreno
	Escribir 'precio del metro cuadrado:: ' 
	Leer precioDeTerreno
	Escribir 'Q.', areaTerreno*precioDeTerreno
	perimetroTerreno<-(anchoTerreno*2)+(largoTerreno*2)
	metrosAlambre<-perimetroTerreno*3
	Escribir 'metros de alambre:: ', metrosAlambre, ' m'
FinAlgoritmo
