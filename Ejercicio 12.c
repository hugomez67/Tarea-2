/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 12*/

#include <stdio.h>

int main()
{
	int n;
	int producto = 1;

	printf("ingresa tu n numero: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		producto = producto * i;
	}

	printf("El producto de los primeros %d numeros naturales es: %d", n, producto);
	return 0;
}
