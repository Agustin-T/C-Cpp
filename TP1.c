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
// Una vez iniciado el ciclo el programa informará por medio de mensajes apropiados el estado del proceso respetando los tiempos establecidos para cada operación (igual que en el caso del lavado). 
// Después de completar el ciclo debe volver a mostrar el menú principal.

// Importante: en todos los ciclos de espera el programa debe poder detectar la pulsación de la tecla Escape (ESC), cuando esto ocurra el programa debe pasar inmediatamente a la siguiente 
// etapa del ciclo o finalizarlo si ya se encuentra en la última etapa. Si se trata del ciclo manual los totales informados deben ajustarse a los tiempos reales de cada etapa.

// La opción Salir del Programa finaliza su ejecución.

// Deberá implementar funciones como mínimo para:
// - Generar y presentar el menú principal del programa.
// - Controlar la ejecución del proceso manual.
// - Controlar la ejecución del proceso automático de pintura base.
// - Controlar los tiempos de espera.
// El proyecto llevará el nombre del alumno y deberá entregarse dentro del plazo establecido por el docente de la materia.

#include <stdio.h>
//#include<windows.h> uso en S.O Windows
#include <stdlib.h>


// estetica al promgrama
void ast(int type){
    // asteriscos
    if (type==1){
        printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    }
    // hastag
    if (type==2){
        printf("--------------------------------------------------------------------------------\n");
    // barras
    }
    if (type==3){
        printf("////////////////////////////////////////////////////////////////////////////////\n");
    }

}

void barraCarga(float t){

    // █ = ALT + 219
    const int LOAD = 219;
    // espacio =  ALT + 32
    const int SPACE = 32;

    float tiempo = 0;   
    float porcentaje = 100 / t;
    float porcentajeLOAD = 0;
    int cantLOAD = 20;
    float cont = 0;
    float test = 0;

    
    int relacionSPACE = 3;
    int relacionLOAD = 0;
    int relacionSPACELOAD = 20;
    
    for(int i = 0; i <= t; i++){
        // Correccion de calculo por falta de suma de milessimas
        if(i == t){
            cont = 100;
            relacionLOAD = cantLOAD;
        }
        // remainder retorna % en float
        if(cont >= 10){
            relacionSPACE = 2;
        }
        
        if(cont == 100){
            relacionSPACE = 1;
        }
        //cantidad de barras a mostrar
        porcentajeLOAD = ((cont * cantLOAD) / 100);
        relacionLOAD = porcentajeLOAD;
        relacionSPACELOAD = 20 - relacionLOAD;

        // impresion
        printf("\r En proceso %.2f%%", cont);
        for(int k = 1; k <= relacionSPACE; k++){
            printf("%c", SPACE);
        }
        printf("|");
        for(int j = 0; j <= relacionLOAD; j++){
            printf("%c", LOAD);      
        }
        for(int q = 0; q <= (relacionSPACELOAD -1); q++){
            printf("%c", SPACE);
        }
        printf("|");
        //identacion para 3 digitos
        if(i >= 100){
            printf(" ");
        }else if(i >= 10){
            printf("  ");
        }else{
            printf("   ");
        }
        printf("%i", i);
        printf(" seg");
        
        cont += porcentaje;
        sleep(1);
    }
}

void manual(){
    int op4;
    while(op4 /*y escuchar teclas escape*/){
        
        float tLavado, tSecado, wLavado, wSecado, tPotencia;
        int op2, tecla1;

        ast(2);
        printf("\n\t\t\tLavado Manual\n\n");
        ast(2);
        while(op2){
            printf("\n> Ingrese el tiempo de lavado (entre 30 y 60 segundos ):\n> ");
            scanf("%f", &tLavado);
            printf("\n> Ingrese el tiempo de secado (entre 20 y 90 segundos):\n> ");
            scanf("%f", &tSecado);
            if(tLavado >= 30 && tLavado <= 60 && tSecado >= 20 && tSecado <= 90){
                break;
            }
            printf("-- valores ingresados incorrectos--\n");       
        } 

        printf("\n- Presione <Enter> = Iniciar el Lavado\n"
                "\t   <Esc>   = Salir\n> ");
        scanf("%i", &tecla1); 

        wLavado = tLavado * 5;
        wSecado = tSecado * 12;
        tPotencia = wLavado + wSecado;

        ast(2);
        printf("\n Proceso de lavado de INICIALIZADO\n");
        barraCarga(tLavado);
        printf("\n Proceso de lavado de FINALIZADO\n");
        ast(2);
        printf("\n Proceso de secado de INICIALIZADO\n");
        barraCarga(tSecado);
        printf("\n Proceso de secado de FINALIZADO\n");
        ast(2);

        printf("\n CICLO FINALZADO\n\n");
        printf(" Tiempo de lavado aplicado(seg): %.0f\n", tLavado);
        printf(" Tiempo de secado aplicado(seg): %.0f\n", tSecado);
        printf(" Total de potenca(W):            %.2f\n", tPotencia);
        printf(" Potencia de lavado(W):          %.2f\n", wLavado);
        printf(" Potencia de Secado(W):          %.2f\n", wSecado);

        printf("\n- Presione <Enter> = Reiniciar el lavado\n"
                "\t   <Esc>   = Salir\n> ");
        scanf("%i", &tecla1);

        if(tecla1 = -1){
            ast(2);
            printf("\n\n\t\t\tMenu principal\n\n");
            ast(2);
            break;
        }else{
            continue;
        }
    }
}

void automatico(){
    
    float tecla2;
    int op3;
    while(op3){
        ast(2);
        printf("\n\t\t\tLavado Automatico\n\n");
        ast(2);
        // 164 = ñ
        printf("\n");
        printf("\n Ba%co decapante de la pieza:        Tiempo: 20 seg", 164);
        printf("\n Lavado desengrasante:              Tiempo: 35 seg");
        printf("\n Secado en horno:                   Tiempo: 20 seg");
        printf("\n Aplicar pintura base:              Tiempo: 15 seg");
        printf("\n\n - Presione <Enter> = Iniciar el Lavado\n"
            "\t    <Esc>   = Salir\n> ");
        scanf("%f", &tecla2);
        if(tecla2 == -1/*esc*/){
            ast(2);
            printf("\n\n\t\t\tMenu principal\n\n");
            ast(2);
            break;
        }

        ast(2);
        printf("\n Ba%co decapante de la pieza INCIALIZADO\n", 164);
        barraCarga(20);
        printf("\n Ba%o decapante de la pieza FINALIZADO\n", 164);
        ast(2);
        printf("\n Lavado desengrasante INCIALIZADO\n");
        barraCarga(35);
        printf("\n Lavado desengrasante FINALIZADO\n");
        ast(2);
        printf("\n Secado en horno INCIALIZADO\n");
        barraCarga(20);
        printf("\n Secado en horno FINALIZADO\n");
        ast(2);
        printf("\n Aplicado de pintura base, INCIALIZADO\n");
        barraCarga(15);
        printf("\n Aplicado de pintura base, FINALIZADO\n");
        ast(2);
        printf("\n Proceso completado\n");
        ast(2);
    

        printf("\n\n- Presione <Enter> = Reiniciar el ciclo\n"
            "\t   <Esc>   = Salir\n> ");
        scanf("%f", &tecla2);

        if(tecla2 == -1/*esc*/){
            ast(2);
            printf("\n\n\t\t\tMenu principal\n\n");
            ast(2);
            break;
        }else{
            continue;
        }
    }
    
    
}

void main(){
    int op;
    ast(1);
    printf("\n\n\t\t\tPrograma de Auto Plus ejecutandose\n\n\n");
    ast(1);
    while (op){
        // menu principal
        ast(3);
        printf("\n> 1 - Ciclo de lavado manual");
        printf("\n> 2 - Ciclo automatizado de pintura base");
        printf("\n> 3 - Salir del promgrama");
        printf("\n> ");
        scanf("%i", &op);
        ast(3);

        if(op == 1){
            manual();
        }
        else if(op == 2){   
            automatico();
        }
        else if(op == 3){
            ast(1);
            printf("\n\t\t\tSaliendo del programa...\n\n");
            ast(1);
            break;
        }
        else{
            ast(1);
            printf("\n\t\t\tValor Incorrecto, intente de nuevo\n");
            ast(1);
        }
    }
}