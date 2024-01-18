#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct alumno {
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
}
;
void ingresarDatos(struct alumno *alumnos, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n");
        printf("Ingrese los datos del alumno %d:\n", i+1);
        printf("Matricula: ");
        scanf("%d", &(alumnos[i].matricula));
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("Direccion: ");
        scanf("%s", alumnos[i].direccion);
        printf("Carrera: ");
        scanf("%s", alumnos[i].carrera);
        printf("Promedio: ");
        scanf("%f", &(alumnos[i].promedio));
        getchar(); // Limpiar el teclado
    }
}