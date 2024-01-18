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
        printf("Datos del alumno %d:\n", i + 1);
        printf("Matricula: %d\n", alumnos[i].matricula);
        printf("Nombre: ");
        puts(alumnos[i].nombre);
        printf("Dirección: ");
        puts(alumnos[i].direccion);
        printf("Carrera: ");
        puts(alumnos[i].carrera);
        printf("Promedio: %.2f\n", alumnos[i].promedio);
        printf("\n");
    }
}
int main() {
    int n;
    printf("Ingrese el numero de alumnos: "); // Solicita al usuario que ingrese el numero de alumnos
    scanf("%d", &n); 
    fflush(stdin); // Limpiar el buffer del teclado
// Reserva de memoria para el arreglo de estructuras "alumno"
struct alumno *alumnos = malloc(n * sizeof(struct alumno));
    ingresarDatos(alumnos, n);

    int opcion;
    // se crea el menu principal 
    
    

    do {
        printf("Menú:\n");
        printf("1. Imprimir datos de todos los alumnos\n");
        printf("2. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        fflush(stdin); 

        
        switch (opcion) {// con esta funcion sirve para hacer el menu 
            case 1:
                // Imprimir datos de todos los alumnos
                imprimirDatos(alumnos, n);
                break;
            case 2:
                // Salir del programa
                printf("Saliendo del programa...\n");
                break;
            default:
                //opcion invalida 
                printf("Opción invalida\n");
                break;
        }
    } while (opcion != 2); // Repetir el menu hasta que se elija la opcion 1

    // Liberar la memoria asignada
    free(alumnos);

 
    return 0; 
}
