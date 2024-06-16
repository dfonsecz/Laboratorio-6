#ifndef STACK_H
#define STACK_H

/*
Define la lista enlazada que será utilizada por main.c y stack.c
*/

// Definición de un nodo de la lista enlazada
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Definición del stack
typedef struct {
    Node *head;
} Stack;

// Funciones que utilizará la línea
void initialize(Stack *s);
void push(Stack *s, int data);
int pop(Stack *s);
int peek(Stack *s, int position);
int isEmpty(Stack *s);

#endif