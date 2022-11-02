#include <stdio.h>
#include <string.h> // fflush()


#include <stdlib.h> // (sleep)


// Opcion 1



// int barraCarga(){
//     for(float  i = 0; i < 10000; i++){
//         printf("\r En proceso %.2f%%", i / 100);
//         fflush(stdout);
//     }
//     printf("\n");
// }



// Opcion 2

// int barraCarga(){
//     printf("\r En proceso ..\n");
//     printf("En proceso 00.00%%");
//     for(float i = 0; i <= 10000; i++ ){
//             printf("\b\b\b\b\b");
//             fflush(stdout);
//             sleep(10);
//     }
//     printf("\n");
// }

void barraCarga(){
    // 1000 = 1s
    printf("\n > 'Proceso'");
    for (float i = 0; i <= 10000; i++){
        
        printf("\r En ejecucion: %.2f%%", i);
        fflush(stdout);
        
        }
    printf("\n");
}

void main(){
    barraCarga();
}