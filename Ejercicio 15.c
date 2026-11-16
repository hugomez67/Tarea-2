/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 15*/

#include <stdio.h>
int main()
{
	int arr[5];
	int numero;
	int negativos = 0;
	int positivos = 0;
	int nulos = 0;
	for (int i = 0; i < 5; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] > 0)
			positivos++;
		else if (arr[i] < 0)
			negativos++;
		else
			nulos++;
	}

	printf("Positivos: %d\n", positivos);
	printf("Negativos: %d\n", negativos);
	printf("Nulos: %d\n", nulos);
	return 0;
}
