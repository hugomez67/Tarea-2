/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 2*/

#include <stdio.h>
int main()
{
	double pi = 3.14159;
	double radio;
	printf("Inserta el radio de tu circunferencia: ");
	scanf("%lf", &radio);
	printf("Area: %f\n", pi * radio * radio);
	printf("Circunferencia: %f\n", 2 * pi * radio);
	return 0;
}
