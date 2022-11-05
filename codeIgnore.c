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
    // ▓ = ALT + 178
    const int LOAD = 178;
    char space = "-";
    //char* LOAD[] = {"t", "e", "s", "t"};

    float porcentaje = 100 / t;
    float cont = 0;
    
    for(float i = 0; i <= t; i++){
        
        printf("\r En proceso %3.2f%%", cont);
        for(int k = 1; k <= 3; k++){
            printf("%c", space);
        }
        for(int j = 0; j <= 19; j++){
            printf("%c", LOAD);
        }
        sleep(1);
        cont += porcentaje;
    }
    return 0;
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

// opcion 1 alertEsc();

// int alertEsc(){
//     while(1){
        // 27 = escape
        // if(GetAsyncKeyState(0x27)){
        //     printf("\nVolvendo al menu principal");
        //     sleep(100);
        // }
        // 13 = enter+



//     }
// }

void buscadorSignos(){
    // Caracteres ASCII extendidos

    int a = 128;
    int b = 255;

    for(int i = a; i <= b; i++){
        printf("%c - %i\n", i, i);
    }
}

void main(){
    
    // carga de datos
    int a;


    printf("TEST\n");
    printf("- Ingreese la cantidad de tiempo(s) que se usar:\n> ");
    scanf("%i", &a); 
    barraCarga(a);
    //buscadorSignos();

    

}

// webs:

/*

    https://cherrytree.at/misc/vk.htm


*/