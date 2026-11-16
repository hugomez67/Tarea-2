/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 1*/

#include <stdio.h>

int main()
{
	int arr[3];
	printf("Inserta el primer numero: ");
	scanf("%d", &arr[0]);
	printf("Inserta el segundo numero: ");
	scanf("%d", &arr[1]);
	printf("Multiplicacion: %d\n", arr[0] * arr[1]);
	printf("Suma: %d\n", arr[0] + arr[1]);
	printf("Resta: %d\n", arr[0] - arr[1]);
	return 0;
}
