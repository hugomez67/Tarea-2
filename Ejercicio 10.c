/*Gomez Hernandez Hugo Santiago
Tarea 2
Ejercicio 10*/

#include <stdio.h>

void contar()
{
    int numero;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    for(int i = 1; i <= 100; i++)
    {
        printf("Ingresa un numero: ");
        scanf("%d", &numero);

        if(numero > 0)
        {
            positivos++;
        }
        else if(numero < 0)
        {
            negativos++;
        }
        else
        {
            nulos++;
        }
    }

    printf("\nPositivos: %d", positivos);
    printf("\nNegativos: %d", negativos);
    printf("\nNulos: %d\n", nulos);
}

int main()
{
    contar();

    return 0;
}
