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
    const int LOAD = 219;
    // espacio =  ALT + 32
    const int SPACE = 32;

    float porcentaje = 100 / t;
    float cont = 0;
    float porcentajeLOAD = t / 20;
    float relacionLOAD = 0;
    float relacionSPACE = 3;
    
    for(float i = 0; i <= t; i++){
        
        printf("\r En proceso %.2f%%", cont);
        for(int k = 1; k <= relacionSPACE; k++){
            printf("%c", SPACE);
        }
        printf("|");
        for(int j = 1; j <= 20; j++){
            printf("%c", LOAD);
        }
        printf("|");

        sleep(1);
        cont += porcentaje;

        relacionSPACE = 2;
        if(cont == 100){
            relacionSPACE = 1;
        }
        while(porcentajeLOAD >= cont){
            relacionLOAD += 1;
        }
        printf("\t\t\t\tTest %i", relacionLOAD);
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