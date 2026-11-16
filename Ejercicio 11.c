/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 11*/

#include <stdio.h>
#define numero1 10
#define numero2 50

int main()
{
	int suma = 0;

	for (int i = numero1; i <= numero2; i += 2) {
		suma = suma + i;
	}

	printf("La suma de los pares entre %d y %d es: %d", numero1, numero2, suma);
	return 0;
}
