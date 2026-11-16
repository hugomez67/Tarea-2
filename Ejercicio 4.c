/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 4*/

#include <stdio.h>

int main()
{
    float dinero;
    float interes = 2.7845;
    float monto;

    printf("Ingresa la cantidad de dinero que vas a invertir: ");
    scanf("%f", &dinero);

    monto = dinero + (dinero * interes / 100);

    printf("\nEl interes mensual es: %.4f%%", interes);
    printf("\nEl monto al finalizar el mes es: %.2f\n", monto);

    return 0;
}
