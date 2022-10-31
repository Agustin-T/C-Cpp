// Usted se desempeña como programador en la empresa “Auto Plus” y deberá desarrollar un programa para automatizar un proceso de producción de piezas metálicas que necesitan ser 
// sometidas a distintos procesos como se detalla a continuación.
// El programa debe tener un menú principal con las opciones para:
// 1-	Ciclo de Lavado Manual
// 2-	Ciclo Automático de Pintura Base
// 3-	Salir del programa

// El menú se ejecutará en forma permanente hasta que se seleccione la opción “Salir del programa”. Ejemplo de cómo se muestra el menú en la pantalla:
// Auto Plus, menú de opciones:
// 1-	Ejecutar Ciclo de Lavado Manual
// 2-	Ejecutar Ciclo Automático de Pintura Base
// 3-	Salir del programa
// Ingrese una opción (1, 2 o 3):

// Ciclo de Lavado Manual: en este proceso cada pieza es sometida a un lavado desengrasante durante cierto tiempo y luego pasa a un proceso de secado en horno durante otro tiempo, 
// terminado el tiempo de secado el ciclo finaliza. La ejecución de ciclo comienza con el ingreso por parte del usuario del tiempo de lavado, que estará comprendido entre 30 y 60 
// segundos, a continuación, el usuario deberá ingresar el tiempo de secado, entre 20 y 90 segundos. Ambos valores deben ser controlados por el programa que no debe permitir 
// continuar hasta que los valores no cumplan con las condiciones establecidas. Después de ingresar los dos valores solicitados el programa esperará que el operario presione la 
// tecla “Enter” para comenzar el ciclo.
// Una vez iniciado el ciclo el programa informará por medio de mensajes apropiados el estado del proceso respetando los tiempos establecidos para cada operación. Al finalizar 
// el ciclo, el programa mostrará el tiempo total empleado y la potencia consumida por cada etapa, la bomba eléctrica para el lavado consume 5W por segundo y el horno eléctrico 
// de secado consume 12W por segundo.

// Ejemplo: si ingresa 30 segundos para el lavado y 20 segundos para el secado, el programa mostrará estos mensajes por pantalla:
// Presione <Enter> para iniciar el ciclo
// Iniciando proceso de lavado …
// (después de 30 segundos): Lavado finalizado
// Iniciando proceso de secado …
// (después de 20 segundos): Secado finalizado
// Ciclo Finalizado
// Tiempo Total: 50 segundos
// Potencia de Lavado: 150 W
// Potencia de Secado: 240 W
// Presione <Enter> para volver al menú

// Ciclo Automático: en esta opción los tiempos de cada etapa ya se encuentran pre-definidos y no es necesario que el usuario los ingrese al programa.
// Ciclo Automático de Pintura Base: este ciclo consta de 4 pasos:
// 1-	Baño decapante de la pieza, tiempo: 20 segundos
// 2-	Lavado desengrasante, tiempo: 35 segundos
// 3-	Secado en horno, tiempo 20 segundos
// 4-	Aplicar pintura base, tiempo 15 segundos
// Al seleccionar esta opción del menú principal el programa esperará que el usuario presione la tecla “Enter” para iniciar el ciclo.
// Una vez iniciado el ciclo el programa informará por medio de mensajes apropiados el estado del proceso respetando los tiempos establecidos para cada operación (igual que en el caso del lavado). Después de completar el ciclo debe volver a mostrar el menú principal.
// Importante: en todos los ciclos de espera el programa debe poder detectar la pulsación de la tecla Escape (ESC), cuando esto ocurra el programa debe pasar inmediatamente a la siguiente etapa del ciclo o finalizarlo si ya se encuentra en la última etapa. Si se trata del ciclo manual los totales informados deben ajustarse a los tiempos reales de cada etapa.
// La opción Salir del Programa finaliza su ejecución.

// Deberá implementar funciones como mínimo para:
// - Generar y presentar el menú principal del programa.
// - Controlar la ejecución del proceso manual.
// - Controlar la ejecución del proceso automático de pintura base.
// - Controlar los tiempos de espera.
// El proyecto llevará el nombre del alumno y deberá entregarse dentro del plazo establecido por el docente de la materia.

#include<stdio.h>


// estetica al promgrama
void ast(int type){
    // asteriscos
    if (type==1){
        printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    }
    // hastag
    if (type==2){
        printf("\n--------------------------------------------------------------------------------");
    // barras
    }
    if (type==3){
        printf("\n////////////////////////////////////////////////////////////////////////////////");
    }

}

void manual(){
    int tLavado, tSecado, wLavado, wSecado, tPotencia, enter;
    int op2;

    while(op2){
        printf("\n> Ingrese el tiempo de lavado (entre 30 y 60 segundos ):\n> ");
        scanf("%i", &tLavado);
        printf("\n> Ingrese el tiempo de secado (entre 20 y 90 segundos):\n> ");
        scanf("%i", &tSecado);
        if(tLavado >= 30 && tLavado <= 60 && tSecado >= 20 && tSecado <= 90){
            break;
        }
        printf("-- valores ingresados incorrectos--\n");       
    } 

    printf("\n- Presione <Enter> para iniciar el ciclo");
    scanf("%c", &enter); 

    wLavado = tLavado * 5;
    wSecado = tSecado * 12;
    tPotencia = wLavado + wSecado;

    ast(2);
    printf("\nProceso de lavado de inicializado\n");
    printf("\nDelay\n");
    printf("\nProceso de lavado de finalizado\n");
    ast(2);
    printf("\nProceso de secado de inicializado\n");
    printf("\nDelay\n");
    printf("\nProceso de secado de finalizado\n");
    ast(2);
    printf("\nCiclo finalizado\n");
    printf("Tiempo de lavado aplicado: %i\n", tLavado);
    printf("Tiempo de lavado aplicado: %i\n", tSecado);
    printf("Total de potenca: %i\n", tPotencia);
    printf("Potencia de lavado: %i\n", wLavado);
    printf("Potencia de Secado: %i\n", wSecado);
    printf("\n> - Presione <Enter> para iniciar el ciclo");
    scanf("%c", &enter);
}

void main(){
    int op;

    printf("Programa de Auto Plus ejecutandose");
    ast(1);
    while (op){
        // menu principal
        ast(3);
        printf("\n> 1-Ciclo de lavado manual");
        printf("\n> 2-Ciclo automatizado de pintura base");
        printf("\n> 3-Salir del promgrama");
        printf("\n> Ingrese una opcion (1, 2 o 3):\n> ");
        scanf("%i", &op);
        ast(3);

        if(op == 1){
            ast(2);
            printf("\nLavado desengrazante");
            ast(2);
            manual();
            
        }
        else if(op == 2){
            ast(2);
            printf("\nAction 2");
            ast(2);
        }
        else if(op == 3){
            ast(1);
            printf("\nSaliendo del programa...\n");
            ast(1);
            break;
        }
        else{
            ast(1);
            printf("\nValor Incorrecto, intente de nuevo\n");
            ast(1);
        }
    }

}