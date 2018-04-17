#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct {
    int legajo;
    char nombre[20];
    int nota1;
    int nota2;
    float promedio;
} tAlumno;

int buscarLibre(tAlumno[], int);
float calcularPromedio(int, int);
int cargarAlumno(tAlumno[], int);
void mostrarAlumnos(tAlumno[], int);
void mostrarAlumno(tAlumno alumno);

int main()
{
    tAlumno alumnos[TAM];
    int opcion, index, i;

    for (i = 0; i < TAM; i++) {
        alumnos[i].legajo = 0;
    }

    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            index = cargarAlumno(alumnos, TAM);
            if (index == -1) {
                printf("No hay lugar disponible!!!");
            } else {
                printf("Alumno ingresado\n");
            }
            break;
        case 2:
            mostrarAlumnos(alumnos, TAM);

        }
    }
    while (opcion != 9);

    return 0;
}

int buscarLibre(tAlumno alumnos[], int tam)
    {
        int index = -1;
        int i;
        for (i=0; i<tam; i++)
        {
            if(alumnos[i].legajo == 0)
            {
                index = i;
                break;
            }
        }
        return index;
    }

float calcularPromedio(int nota1, int nota2)
    {
        float res;
        res = (float)(nota1 + nota2) / 2;
        return res;
    }

void mostrarAlumnos(tAlumno alumnos[], int cant) {
    int i;
    for (i = 0; i < cant; i++) {
        mostrarAlumno(alumnos[i]);
    }
}

void mostrarAlumno(tAlumno alumno) {
    printf("%d -- %s -- %d -- %d -- %.2f\n", alumno.legajo, alumno.nombre, alumno.nota1, alumno.nota2, alumno.promedio);
}

int cargarAlumno(tAlumno alumnos[], int tam) {
    int indice = buscarLibre(alumnos, tam);
    if (indice != -1) {
        printf("Ingrese legajo: ");
        scanf("%d", &alumnos[indice].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(alumnos[indice].nombre);

        printf("Ingrese nota 1: ");
        scanf("%d", &alumnos[indice].nota1);

        printf("Ingrese nota 2: ");
        scanf("%d", &alumnos[indice].nota2);

        alumnos[indice].promedio = calcularPromedio(alumnos[indice].nota1, alumnos[indice].nota2);
    }

    return indice;
}
