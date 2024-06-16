#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
Prueba la funcionalidad de stack.c
- Imprime una pila predeterminada
- Agrega un elemento indicado por el usuario
- Imprime la pila actualizada
- Elimina el elemento superior de la pila
- Imprime la pila actualizada de nuevo

@argc: cantidad de argumentos ingresados
@argv: argumento ingresado que se incluirá y eliminará de la pila
@Stack: pila
*/

int main(int argc, char *argv[]) {
    Stack s;
    initialize(&s);

    // Verificar si se proporcionó un argumento
    if (argc != 2) {
        printf("Ingresa un argumento\n");
        return 1;
    }

    // Convertir el argumento en un número entero
    int number = atoi(argv[1]);

    // Elementos inicialmente en la pila
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    // Imprimir la cómo es la pila inicialmente
    printf("Pila inicialmente\n");
    if (!isEmpty(&s)) {
        int i;
        for (i = 1; i <= 3; i++){
            printf("Stack[%d] = %d\n", i, peek(&s, i));
        }
    } else {
        printf("La pila está vacía\n");
    }

    // Agregar el elemento ingresado por el usuario
    push(&s, number); // Agrega el nuevo elemento a la pila
    printf("\nAgregaste el elemento: %d\n", number);
    printf("\nPila actualizada:\n");

    // Imprimir pila actualizada
    if (!isEmpty(&s)) {
        int i;
        for (i = 1; i <= 4; i++){
            printf("Stack[%d] = %d\n", i, peek(&s, i));
        }
    } else {
        printf("La pila está vacía\n");
    }

    // Eliminar elemento superior en la pila
    int removed = pop(&s);
    if (removed != -1) {
        printf("\nAhora se eliminará este elemento\n");
    }

    // Imprimir pila actualizada
    printf("\nPila actualizada:\n");
    if (!isEmpty(&s)) {
        int i;
        for (i = 1; i <= 3; i++){
            printf("Stack[%d] = %d\n", i, peek(&s, i));
        }
    } else {
        printf("La pila está vacía\n");
    }

    return 0;
}