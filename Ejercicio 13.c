/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 13*/

#include <stdio.h>
int main()
{
	int arr[5];
	int suma = 0;
	for (int i = 0; i < 5; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		suma = suma + arr[i];
	}

	printf("La suma del arreglo es: %d", suma);
	return 0;
}
