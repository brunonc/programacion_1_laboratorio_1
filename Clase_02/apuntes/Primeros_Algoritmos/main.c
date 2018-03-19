#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void forEj1() {
    int i, suma = 0;
    for (i = 1; i <= 100; i++) {
        suma += i;
    }
    printf("La suma de los numeros del 1 al 100 es: %d", suma);
}

void forEj2() {
    char d;
    for (;;) {
        d = getc(stdin);
        printf("%c", d);
        if (d == 's')
            break;
    }
}

void whileEj1() {
    int i = 1, suma = 0;
    while (i <= 100) {
        suma += i;
        i++;
    }
    printf("La suma de los numeros del 1 al 100 es: %d", suma);
}

void whileEj2() {
    while (getc(stdin) != '\x1B'); /* Este bucle espera hasta que se pulse la tecla Esc */
}

void do_whileEj1() {
    int num;
    do {
        scanf("%d", &num);
    } while (num < 100);
}

void do_whileEj2() {
    int i, j;
    do {
        scanf("%d", &i);
        scanf("%d", &j);
    } while (i < j);
}

void ifEj() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a > b) {
        b--;
        a += 5;
    } else {
        a++;
        b -= 5;
    }
    printf("Los nuevos valores de las variables ingresadas son: %d, %d", a, b);
}

void acum_contEj() {
    int i, suma = 0;
    for (i = 0; i < 10; i++) {
        int aux;
        scanf("%d", &aux);
        suma += aux;
    }
    printf("La suma es: %d", suma);
}

void max_min() {
    int i, suma = 0;
    int max = INT_MIN; // Constante definida en limits.h
    int min = INT_MAX; // Constante definida en limits.h

    for (i = 0; i < 10; i++) {
        int aux;
        scanf("%d", &aux);
        suma += aux;

        if (aux > max) {
            max = aux;
        }

        if (aux < min) {
            min = aux;
        }
    }
    printf("La suma es: %d\n", suma);
    printf("El maximo es: %d\n", max);
    printf("El minimo es: %d\n", min);
}

int main()
{
    // forEj1();
    // forEj2();
    // whileEj1();
    // whileEj2();a
    // do_whileEj1();
    // do_whileEj2();
    // ifEj();
    // acum_contEj();
    max_min();
    return 0;
}
