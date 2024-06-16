### Universidad de Costa Rica
#### IE0117 Programación Bajo Plataformas Abiertas
#### B93070 Daniela Fonseca Zumbado

# Laboratorio-6

## Introducción
En este laboratorio se explora el uso de Listas Doblemente Enlazadas y de memoria dinámica. El propósito principal del laboratorio es desarrollar e implementar un programa que utilice estas listas para manipular el contenido de una estructura tipo Stack.

## Implementación
### stack.c
En primer lugar, incluye una función para inicializar la pila. Además, incluye las siguientes funciones:

#### push()

Esta función tiene el propósito de agregar un elemento a la parte superior de la pila utilizando una estructura de datos enlazada. En primer lugar, se hace la asignación de la memoria con el uso de malloc, y se verifica que se haya hecho esta asignación de forma correcta. Se inicializa un nuevo nodo y se asigna el valor proporcionado como argumento `data` a la variable del mismo modo de este nodo.

Después de esto, se establece que el puntero `next` apunte al nodo que es actualmente el `head`. Además, se actualiza el puntero `head` para que apunte al nuevo nodo.

#### pop()

Por otra parte, esta función tiene el comportamiento opuesto a la anterior. Retorna y elimina el elemento en la parte superior de la pila. Después de verificar que la pila no esté vacía, se almacena la dirección del nodo `head` en un puntero `temp` para asegurarse de no perder la referencia a este nodo.

Una vez hecho esto, se almacena el valor del nodo `head` en la variable `data` y se ajusta `head` al nodo siguiente, lo que hace que se elimine el nodo de la pila. Finalmente, se libera la memoria del nodo eliminado `temp` y se retorna el valor del nodo eliminado.

#### peek()

Para la función `peek`, el propósito es que retorne valor del elemento en una posición específica indicada, pero sin eliminar este valor como en la función anterior. Primero, se inicializa un puntero que apunta a `head` y se recorre la pila con un for loop hasta la posición deseada. Finalmente, se retorna el valor del nodo para la posición especificada.

#### isEmpty()

Esta función verifica si el Stack se encuentra vacío. Para esto compara el valor `head` con `'NULL`. Retorna valores enteros 0, si la pila no está vacía y 1 si lo está.

### stack.h

Este archivo incluye el header que usan tanto `stack.c` como `main.c`.
### main.c
### Makefile

## Resultados

### Compilación del programa
Primero, se compila el programa con el uso de makefile, el cual produce el archivo ejecutable `main`. En la imagen se puede observar que al ejecutar este archivo sin ingresar un argumento, la respuesta del programa es pedirle al usuario que lo ingrese.

### Añadir un elemento al inicio de la pila
Al ingresar un número como argumento, se ejecuta adecuadamente el programa. Primero, se presenta la pila predeterminada. Luego, se indica al usuario que se va a añadir el elemento que ingresó a la pila y se imprime la pila, ahora actualizada, de nuevo. Este elemento se añade en la parte superior, por medio de la función `push`.

### Eliminar elemento del inicio de la pila
Posteriormente, para utilizar la función de `pop` se elimina el elemento superior de la pila, el cual es el que ingresó el usuario. En la imagen se observa que después de notificar que eliminará este elemento, la pila ahora ya no lo incluye.

Se hace uso de la función `peak` al imprimir los elementos de la pila y de `isEmpty` para verificar si la pila se encuentra vacía varias veces en el programa.

![Funcionalidad](images/1.png)

Para confirmar que el programa no presenta leaks de memoria, se ejecuta el programa valgrind. En la imagen se observa el reporte que indica que no hay errores. Además, se hace uso de la función de clean del makefile para eliminar los archivos que fueron generados por el programa.

![Valgrind](images/2.png)

## Conclusiones y recomendaciones

1. Se concluye, como primer punto,
2. Como recomendación, es importante liberar la memoria de los nodos eliminados para evitar que haya problemas con la memoria.

## Referencias

[1] “Programación II - 26/04/2013 - Clase 4 - Listas Enlazadas en C,” sites.google.com. https://sites.google.com/site/programacioniiuno/mi-cursada/bitacoras/26042013-clase4-listasenlazadasenc (accesado Jun. 16, 2024).
‌
