#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Inicializar el stack
void initialize(Stack *s) {
    s->head = NULL; // indica stack vacío
}

// Agregar un elemento a la parte superior de la pila
void push(Stack *s, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Stack overflow\n");
        return;
    }
    newNode->data = data;
    newNode->next = s->head;
    s->head = newNode;
}

// Devuelve el elemento en una parte dada de la pila sin eliminarlo
int peek(Stack *s, int position) {
    Node *pointer = s->head;
    for (int i = 0; i < position - 1 && pointer != NULL; i++) {
        pointer = pointer->next;
    }
    if (pointer != NULL) {
        return pointer->data;
    } else {
        return -1; // Indica que la posición no es válida
    }
}

// Revisa si la pila está vacía
int isEmpty(Stack *s) {
    return s->head == NULL;
}