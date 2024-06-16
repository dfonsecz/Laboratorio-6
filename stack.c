#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
Incluye las funciones usadas en main.c:
initialize(): Inicializa la pila
push(): Agrega un elemento a la parte superior de la pila
pop(): Devuelve y elimina el elemento en la parte superior de la pila
peek(): Devuelve el elemento en la parte superior de la pila sin eliminarlo
isEmpty(): Verifica si la pila está vacía
*/

// Inicializar el stack
/*
@Stack: pila
*/
void initialize(Stack *s) {
    s->head = NULL; // indica stack vacío
}

// Agregar un elemento a la parte superior de la pila
/*
@Stack: pila
@data: elemento a agregar a la pila
*/
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

// Eliminar y devolver un elemento de la parte superior de la pila
/*
@Stack: pila
*/
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("La pila está vacía\n");
        return -1; // Error
    }

    Node *temp = s->head; // Guarda el nodo que está en la cabeza
    int data = temp->data; // Guarda la información que se va a retornar
    s->head = s->head->next; // Ajusta el head para que apunte al nodo siguiente
    free(temp); // Libera la memoria del nodo eliminado

    return data;
}

// Devuelve el elemento en una parte dada de la pila sin eliminarlo
/*
@Stack: pila
@position: posición del elemento a la que se hará peek
*/
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
/*
@Stack: pila
*/
int isEmpty(Stack *s) {
    return s->head == NULL;
}