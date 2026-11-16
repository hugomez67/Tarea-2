/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 16*/

#include <stdio.h>
int main()
{
	int arr[100];
	int i = 0;
	int numero = 0;
	while (i < 100) {
		if (numero % 2 == 0) {
			arr[i] = numero;
			i++;
		}
		numero++;
	}
	for (i = 0; i < 100; i++) {
		printf("Elemento %d: %d\n",i+1, arr[i]);
	}
	return 0;
}
