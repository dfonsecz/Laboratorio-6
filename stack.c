#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Definición de un nodo de la lista enlazada
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef Node *TypePointer; // Puntero al tipo de dato del nodo

// Definición del stack
typedef struct {
    TypePointer items[MAX_SIZE];
    int top;
} Stack;

// Inicializar el stack
void initialize(Stack *s) {
    s->top = -1; // indica stack vacío
}

int main() {
    Stack s;
    initialize(&s);

    // Aquí se puede añadir más código para manipular el stack

    return 0;
}
