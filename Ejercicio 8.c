/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 8*/

#include <stdio.h>

int main()
{
	int arreglo[3];
	printf("Inserta el primer numero a dividir: ");
	scanf("%d", &arreglo[0]);
	printf("Inserta el segundo numero a dividir: ");
	scanf("%d", &arreglo[1]);
	if (arreglo[0] % arreglo[1] == 0) {
		printf("Es divisible");
	}
	else {
		printf("No es divisible");
	}
	return 0;
}
