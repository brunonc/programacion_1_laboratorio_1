#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    int numero;
    int max, min;
    char respuesta;
    int pares = 0;
    float promedio;
    int cont = 0;
    int suma = 0;
    int flag = 0;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &numero);
        while (numero <= 0) {
            printf("Por favor, ingrese un numero positivo: ");
            scanf("%d", &numero);
        }
        cont++;
        if (flag == 0 || numero > max) {
            max = numero;
        }
        if (flag == 0 || numero < min) {
            min = numero;
            flag = 1;
        }
        if (numero % 2 == 0) {
            pares++;
        }

        suma += numero;

        printf("Desea ingresar otro numero S/N?");
        respuesta = toupper(getch());
        while (respuesta != 'S' && respuesta != 'N') {
            respuesta = toupper(getch());
        }
        printf("\n");
    } while (respuesta == 'S');
    promedio = (float)suma / (float)cont;
    printf("La cantidad de numeros pares ingresada es: %d\n", pares);
    printf("El promedio de los numeros ingresados es: %.2f\n", promedio);
    printf("La suma de los numeros ingresados es: %d\n", suma);
    printf("El maximo numero ingresado es: %d\n", max);
    printf("El minimo numero ingresado es: %d\n", min);
    return 0;
}
