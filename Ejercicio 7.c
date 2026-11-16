/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 7*/

#include <stdio.h>
#define descuento 0.30
#define precio_por_km 0.23
int main()
{
	int distancia;
	int estancia;
	double precio;
	printf("Inserta los dias de estancia: ");
	scanf("%d", &estancia);
	printf("Distancia recorrida (en Km): ");
	scanf("%d", &distancia);
	if (estancia > 7 && distancia > 800) {
		precio = (estancia * precio_por_km) - (estancia * precio_por_km * descuento);
	}
	else {
		precio = estancia * precio_por_km;
	}
	printf("Precio total: %f\n", precio);
	return 0;
}
