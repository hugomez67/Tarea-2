/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 9*/

#include <stdio.h>
int main()
{
	int numero;
	int tabla;
	printf("Inserta un numero:\n");
	scanf("%d", &numero);
	printf("Tabla de multiplicar: ");
	for (int i = 0; i < 10; i++) {
		tabla = numero * (i + 1);
		printf("%d\n", tabla);
	}
	return 0;
}
