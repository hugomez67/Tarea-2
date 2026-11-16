/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 5*/

#include <stdio.h>
#define descuento 0.08
#define compra_minima 2500
int main()
{
	double compra;
	printf("Precio de la compra: ");
	scanf("%lf", &compra);
	if (compra >= compra_minima) {
		compra = compra - (compra * descuento);
	}
	printf("El precio final de la compra es: %.2lf", compra);
return 0;
}
