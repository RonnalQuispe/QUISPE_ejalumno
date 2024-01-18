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
void ingresarDatos(struct alumno *alumnos, int n) {// funcion ingresar datos 
    for (int i = 0; i < n; i++) {
        printf("Matricula: ");
        scanf("%d", &(alumnos[i].matricula));
        fflush(stdin); // Limpiar el buffer del teclado

        printf("Nombre: ");
        gets(alumnos[i].nombre);
        fflush(stdin);

        printf("Direccion: ");
        gets(alumnos[i].direccion);
        fflush(stdin);

        printf("Carrera: ");
        gets(alumnos[i].carrera);
        fflush(stdin);

        printf("Promedio: ");
        scanf("%f", &(alumnos[i].promedio));
        fflush(stdin);
    }
}
void imprimirDatos(struct alumno *alumnos, int n) {// funcion imprimir datos 
    for (int i = 0; i < n; i++) {
        printf("Datos del alumno %d:\n", i+1);
        printf("Matricula: %d\n", alumnos[i].matricula);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Dirección: %s\n", alumnos[i].direccion);
        printf("Carrera: %s\n", alumnos[i].carrera);
        printf("Promedio: %.2f\n", alumnos[i].promedio);
        printf("\n");
    }
}
int main() {
    int n;
    printf("Ingrese el numero de alumnos: "); // Solicita al usuario que ingrese el numero de alumnos
    scanf("%d", &n); 
    getchar(); // Limpia teclado

    
    return 0; 
}
