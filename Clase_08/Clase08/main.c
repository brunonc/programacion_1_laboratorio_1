#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30
#define CANT 3

typedef struct {
    // Campos de la estructura
    int legajo;
    char nombre[TAM];
    int nota1;
    int nota2;
    float promedio;
    char email[50];
} eAlumno;

void mostrarAlumnos(eAlumno[], int);
void mostrarAlumno(eAlumno);
float calcularPromedio(int, int);

int main()
{
    eAlumno alumnos[CANT];
    int i;

    for (i = 0; i < CANT; i++) {
        printf("ingrese legajo: ");
        scanf("%d", &alumnos[i].legajo);
        printf("ingrese nombre: ");
        fflush(stdin);
        gets(alumnos[i].nombre);
        printf("ingrese nota1: ");
        scanf("%d", &alumnos[i].nota1);
        printf("ingrese nota2: ");
        scanf("%d", &alumnos[i].nota2);
        alumnos[i].promedio = calcularPromedio(alumnos[i].nota1, alumnos[i].nota2);
        fflush(stdin);
        printf("ingrese email: ");
        gets(alumnos[i].email);
    }

    mostrarAlumnos(alumnos, CANT);

    //mostrarAlumno(miAlumno);

    return 0;
}

void mostrarAlumnos(eAlumno lista[], int cant) {
    int i;
    for (i = 0; i < cant; i++) {
        mostrarAlumno(lista[i]);
    }
}

void mostrarAlumno(eAlumno alumno) {
    printf("%d -- %s -- %d -- %d -- %.2f -- %s\n", alumno.legajo, alumno.nombre, alumno.nota1, alumno.nota2, alumno.promedio, alumno.email);
}

float calcularPromedio(int a, int b){
    float res;
    res = (float)(a + b) / 2;
    return res;
}
