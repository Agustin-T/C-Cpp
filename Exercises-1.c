#include <stdio.h>


// Ejercicos para resolver aplicando estructuras de control repetitivas (for, while, do-while)

// 1.      Que muestre los números del 1 al 100.

// 2.      Que muestre los números del 100 al 1.

// 3.      Que muestre los números pares que haya del 1 al 100.

// 4.      Que imprima la suma de todos los números impares que van del 1 al 100.

// 5.  Que pida dos números enteros y muestre todos los números que van desde el primero al segundo. 
//     Se debe controlar que el primer valor sea menor al segundo.
//     Indicar también la cantidad de valores mostrados.

// 6.  Que pida dos números enteros y sume todos los números que van desde el primero al segundo.
//     Mostrar el resultado de la suma obtenida.
//     Se debe controlar que el primer valor sea menor al segundo.

// 7.  Que pida un número entero entre 1 y 80 y muestre en pantalla el mismo número de asteriscos.

// 8.  Que muestre los números del 1 al 100 en una tabla de 10x10.

// 9.  Que pida un número entero del 1 al 10 y muestre la tabla de multiplicar de ese número.

// 10. Que calcule el factorial de un número cualquiera y lo muestre en pantalla.

// 11. Que pida un núemro entero y diga si el número es primo o no.
void main(){
    int op;
    int select;
    printf("Start Promgram");
    while (op){
        printf("\n\nSelect any option(-1 Exit):\n");
        printf("Exercise 1 \n");
        printf("Exercise 2 \n");
        printf("Exercise 3 \n");
        printf("Exercise 4 \n");
        printf("Exercise 5 \n");
        printf("Exercise 6 \n");
        printf("Exercise 6 \n");
        printf("Exercise 7 \n");
        printf("Exercise 8 \n");
        printf("Exercise 9 \n");
        printf("Exercise 10 \n");
        printf("Exercise 11 \n");
        printf("Select your option: ");
        scanf("%i", &select);

        if(select == 1){
            for(int i=1; i<=100 ; i++){
                printf("%i ", i);
            }  
        }else if(select == 2){
            for(int i=100; i<=1 ; i--){
                printf("%i ", i);
            }
        }else if(select == -1){
            printf("Program Finished");
            break;
        }else{
            printf("The input value is not valid");
        }
    }

    printf(" ");
}