/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 3*/

#include <stdio.h>
#define dolar 11.96

int main()
{
	double dolares;

	printf("Cantidad en dolares: ");
	scanf("%lf", &dolares);
	printf("cantidad en pesos: %lf", dolares * dolar);
return 0;
}
