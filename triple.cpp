// main.c
// src/triples.c
#include <stdio.h>
#include <math.h>
#include "triple.h" // Incluir el archivo de cabecera

// Función que verifica si tres lados forman un triple pitagórico
bool esTriplePitagorico(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

// Función que verifica las condiciones de un triángulo válido
bool esTrianguloValido(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Función para encontrar e imprimir triples pitagóricos hasta un cierto límite
void encontrarTriplesPitagoricos(int limite) {
    for (int a = 1; a <= limite; a++) {
        for (int b = a; b <= limite; b++) {
            int c = sqrt(a * a + b * b);
            // Verificamos si (a, b, c) es un triple pitagórico y un triángulo válido
            if (esTriplePitagorico(a, b, c) && esTrianguloValido(a, b, c) && c <= limite) {
                printf("Triple pitagórico encontrado: %d - %d - %d\n", a, b, c);
            }
        }
    }
}
