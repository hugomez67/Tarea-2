/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 6*/

#include <stdio.h>
#define aumento_inferior 0.15
#define aumento_superior 0.12
#define salario_minimo 1000
int main()
{
	double sueldo;
	printf("Sueldo: ");
	scanf("%lf", &sueldo);
	if (sueldo >= salario_minimo) {
		sueldo = sueldo + (sueldo * aumento_superior);
	}
	else {
		sueldo = sueldo + (sueldo * aumento_inferior);
	}
	printf("Sueldo aumentado: %.2lf", sueldo);
}
