#include <stdio.h>
#include <string.h> // fflush()
#include <time.h> // clock()
#include <stdlib.h> // Sleep();
#include <conio.h> // strings

// Opcion 1

// int barraCarga(){
//     for(float  i = 0; i < 10000; i++){
//         printf("\r En proceso %.2f%%", i / 100);
//         fflush(stdout);
//     }
//     printf("\n");
// }


// Opcion 2

// void barraCarga(){
//     clock_t begin, end;
//     double time_spent;
//     unsigned int i;

//     begin = clock();
//     time_spent = (double)begin / CLOCKS_PER_SEC;

//     for(i = 0; 1; i++){
//         printf("hello \n");
//         time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//         if(time_spent == 5.0){
//             break;
//         }
//     }

//     printf("Number of iterations completed in 5 CPU(?) seconds = %d.\n");
//     return 0;
// }

// Opcion 2.1

// void barraCarga(){
//     clock_t begin, end;
//     double time_spent;
//     unsigned int i;

//     begin = clock();
//     time_spent = (double)begin / CLOCKS_PER_SEC;

//     while(i){
//         printf("hello \n");
//         time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//         if(time_spent == 5.0){
//             break;
//         }
//         i++;
//     }

//     printf("Number of iterations completed in 5 CPU(?) seconds = %d.\n");
//     return 0;
// }


//Opcion 3

// void barraCarga(int tiempo){

//     // 1000 = 1s
//     int conversion = tiempo * 10000;

//     printf("\n > 'Proceso'");
//     for (float i = 0; i <= conversion; i++){
//         printf("\r En ejecucion: %.2f%%", i/100);
//         fflush(stdout);
//         }
//     printf("\n");
// }

//Option temporal con "windwos"

void barraCarga(float t){

    // █ = ALT + 219
    const char LOAD [11]= "██████████";
    int j = 1;
    float porcentaje = 100 / t;
    float cont = 0;
    int cantBarra = 0;
    int bef = 0;
    int esp = 0;
    
    for(float i = 0; i <= t; i++){
        printf("\r En proceso %3.2f%%  |%c", cont,LOAD[j]); 
        if(cont <= 10 * j){
            j++;
        }
        sleep(1);
        cont += porcentaje;
    }
}

// void barraCarga(float t){

//     float porcentaje = 100 / t;
//     float cont = 0;

//     for(float i = 0; i <= t; i++){
//         printf("\r En proceso %.2f%%", cont);
//         sleep(1);
//         cont += porcentaje;
//     }
// }



void main(){
    
    // carga de datos
    int a;

    printf("TEST\n");
    printf("- Ingreese la cantidad de tiempo(s) que se usar:\n> ");
    scanf("%i", &a);
    barraCarga(a);

    // barraCarga();
}