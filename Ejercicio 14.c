/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 14*/

#include <stdio.h>
int main()
{
	int arr[5];
	int numero;
	int temp = 0;
	printf("Numero a buscar: ");
	scanf("%d", &numero);
	for (int i = 0; i < 5; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] == numero) {
			temp++;
		}
	}

	printf("El numero se escuentra : %d", temp);
	return 0;
}
