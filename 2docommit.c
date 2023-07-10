#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Estudiante
struct Estudiante {
    int num;
    char nombre[50];
    char carrera[50];
    float nota1;
    float nota2;
    float nota3;
    float promedio;
};

// Prototipos de funciones
void calcularProm(struct Estudiante* estudiante);
void imprimirEstu(struct Estudiante* estudiantes, int numEstudiantes, FILE* archivo);
void liberarMemoria(struct Estudiante* estudiantes);

int main() {
    FILE* archivoEntrada;
    FILE* archivoSalida;
    struct Estudiante* estudiantes;
    int numEstudiantes;
    int i;

    // Abrir archivo de entrada 
    archivoEntrada = fopen("alumnos.txt", "r");
    if (archivoEntrada == NULL) {
        printf("No se pudo abrir el archivo de entrada.\n");
        return 1;
    }
return 0
  
