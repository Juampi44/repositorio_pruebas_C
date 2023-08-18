/*
10. Factorial
Juan Pablo Gonzalez
Comision 2 - 2023
Programacion 1 - Ingenieria en computacion
Usuario de GitHub: Juampi44
*/

#include <stdio.h>

/* función que calcula factorial de número */
long factorial(int numero) {
    long resultado = 1; // Inicializamos el resultado en 1

    // Usamos un bucle for para calcular el factorial
    for (int i = 1; i <= numero; i++) {
        resultado *= i; // Multiplicamos el resultado por el valor actual de i
    }

    return resultado;
}

int main() {
    int numero;

    // Pide al usuario que ingrese un número entero positivo
    printf("Ingresar número entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, ingrese un número positivo.\n");
    } else {
        // Calcula el factorial del número ingresado por el usuario
        long resultado = factorial(numero);

        // Imprime el resultado del cálculo del factorial
        printf("Factorial de %d es %ld\n", numero, resultado);
    }

    return 0;
}