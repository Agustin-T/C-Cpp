/*

Usted deberá realizar un programa en Lenguaje C que permita al usuario seleccionar distintas opciones para el control de una máquina de control numérico.
 El programa consta de la función main() y deberá tener también 2 funciones mas, como se detalla a continuación:

1- Función para Calcular la profundidad de corte de la herramienta: Esta función debe pedir al usuario que ingrese un valor entero con la velocidad de rotación de la 
herramienta (revoluciones por minuto: rpm) un entero entre 1000 y 10000. Con el valor ingresado deberá calcular la profundidad de corte lograda en un minuto.
La profundidad de corte [milímetros] en un minuto es:
profundidad = ( √(PI * rpm) ) / 60, (Raíz cuadrada de (PI multiplicado por el valor de rpm), todo esto dividido 60.
La función mostrará el resultado del cálculo y regresará a mostrar el menú de opciones.

2- Función para Calcular el tiempo de mecanizado de piezas: Esta función controla el mecanizado de una pieza y debe solicitar al usuario 2 valores, el primero es el 
espesor de la pieza, entero entre 1 y 10, que representa los milímetros de espesor. El segundo valor es la velocidad de mecanizado: 1: lento, 2: rápido. Con esos 
valores la función debe calcular el tiempo de mecanizado.
Para espesores menores a 5 milímetros el mecanizado con velocidad lenta toma 18 segundos por cada milímetro de espesor, con velocidad rápida toma 12 segundos por 
cada milímetro de espesor.
Para espesores mayores o igual a 5 milímetros el mecanizado con velocidad lenta toma 25 segundos por cada milímetro de espesor, con velocidad rápida toma 20 
segundos por cada milímetro de espesor.
Finalizado el cálculo la función mostrará el resultado obtenido y regresará a mostrar el menú de opciones.

La función main() mostrará un menú de opciones:
1-	Calcular profundidad de corte
2-	Calcular el tiempo de mecanizado
3-	Salir del programa


Si el usuario ingresa la opción 1 o 2 el programa ejecutará la función correspondiente y luego volverá mostrar el menú. El programa finaliza solamente cuando 
el usuario ingrese la opción 3.
*/

#include <stdio.h>
#include <math.h>

// #define PI 3,141592

int tMecanizado(){
    int esp, vel, tiempo;
    while(1){
        printf("\n Ingrese el espesor de la pieza(entre 1mm y 10mm): \n > ");
        scanf("%i", esp);
        printf("\n Ingrese la velocidad del mecanizado:\n > 1 - lento\n > 2 - rapido\n > ");
        scanf("%i", vel);

        if((esp <= 1 & esp >= 10) & (vel == 1 || vel == 2)){
            printf("\nValores ingresados correctamente\n");
            break;
        }

        printf("\nValores ingresados incorrectos, intente nuenvamente\n");
            
    }

    // mayorres o iguales a 5
    if(esp <= 5){
        if(vel == 1){
            tiempo = 25;
        }else{
            tiempo = 20;
        }
    // menores de 5
    }else{
        if(vel == 1){
            tiempo = 18;
        }else{
            tiempo = 12;
        }
    }
    return tiempo;
}

int calc_prof(){
    const  double PI = 3.141592;
    int profundidad;
    int vel_rot;
    while(1){

        // velocidad de rotacion
        int vel_rot = 0;

        printf("\nIngrese la veloridad (rpm) - [entre 1000 y 10000]\n> ");
        scanf("%i", &vel_rot);

        if(vel_rot >= 1000 & vel_rot <= 10000){
            break;
        }
        printf("\n El valor ingresado es incorrecto");
    }

    // profundidad = ( √(PI * rpm) ) / 60, 
    // usar funcion sqrt()
    profundidad = ((0.5 * (PI * vel_rot)) / 60);
}

void main(){
    printf("Inicio del programa: \n");
    while(1){
        int op = 0; 
        printf("----------------------------------------------------------------");
        printf("\n> Menu de Opciones");
        printf("\n> Calcular profundidad de corte de la herramienta:");
        printf("\n> Tiempo de mecanizado para la fabricacion de una herramienta");
        printf("\n> Salir del programa\n> ");
        scanf("%i", &op);
        printf("----------------------------------------------------------------\n");

        
        if(op == 1){
            int profundidad;
            profundidad = calc_prof();
            printf("\nProfundida de corte de la herramienta es: %i\n", profundidad);
        }
        else if(op == 2){
            int tiempo;
            tiempo = tMecanizado();
            printf("\nEl tiempo de mecanizado de las piezas es : %i\n", tiempo);
        }
        else if(op == 3){
            printf("\n Finalizando programa... \n");
            break;
        }else{
            printf("\n Valores ingresaros incorrectos, intente nuevamente\n");
        }

    }
}