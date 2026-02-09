Algoritmo precioTerreno
	Definir ancho, largo, precio, area, perimetro, metrosAlambre Como Real
	Escribir 'Ancho (m):: '
	Leer ancho
	Escribir 'largo (m):: '
	Leer largo
	area<-ancho*largo
	Escribir 'precio del metro cuadrado:: ' 
	Leer precio
	Escribir 'Q.', area*precio
	perimetro<-(ancho*2)+(largo*2)
	metrosAlambre<-perimetro*3
	Escribir 'metros de alambre:: ', metrosAlambre, ' m'
FinAlgoritmo
