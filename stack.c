#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];
    int top; // índice del elemento superior de la pila
} Stack;

// Inicializar el stack
void initialize(Stack *s) {
    s->top = -1; // indica stack vacío
}

int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)){
        printf("Stack Overflow: No se pueden agregar más elementos a la pila.\n");
        return;
    }
    s->arr[++(s->top)] = value; // se incrementa el índice del elemento superior y luego se agrega el valor
}

int main() {
    Stack s;
}