/*

Ejercicios de Lenguaje C

1- Se debe calcular el tiempo necesario para cargar un tanque de agua hasta una altura determinada conociendo el caudal de ingreso
   y las dimensiones del tanque.
   Datos fijos:
   Díametro del tanque: 100 cm
   Caudal de ingreso del agua: 3000 cm3 por minuto
   Dato variable: altura a completar: entre 20 cm y 80 cm, este es el dato que se ingresa al programa en una variable
   Calcular la cantidad de minutos necesarios para completar el tanque hasta la altura ingresada.
   Volúmen de un cilindro: área de la base multiplicada por la altura:
     Volúmen = PI * R2 * Altura (la constante pi multiplicada por el radio elevado al cuadrado, todo multiplicado por la altura)

   - Solución: el programa tiene que determinar primero el volúmen a llenar (expresado en cm3), 
     luego podrá calcular el tiempo sabiendo que el caudal es de 3000 cm3 por minuto.

2- Calcular la cantidad de kilos de material que mueve en 10 minutos una cinta transportadora cuya velocidad puede 
   ajustarse entre 0,5 y 2,0 metros por segundo y sabiendo que si la velocidad en menor o igual a 1,5 m/s,
   se colocan sobre ella 3 kilos de material cada 30 segundos pero si la velocidad es mayor a 1,5 m/s en lugar de colocar 3 kilos
   se colocan 5 kilos cada 30 segundos.
   El dato que se ingresa al programa en una variable será la velocidad seleccionada para la cinta transportadora (0,5 a 2,0)
   El programa calculará el total de kilos transportados en 10 minutos con esa velocidad seleccionada.

3- Calcular la temperatura que alcanzará un motor eléctrico según la velocidad de giro mantenida durante 1 hora. 
   La temperatura inicial del motor se ingresa en una variable y debe estar comprendida entre 0 y 30 grados centígrados. 
   La velocidad de giro se ingresa en otra variable y podrá valer de 100 a 5000 rpm
   Si la velocidad de giro es menor a 1000 rpm (revoluciones por minuto) la temperatura se eleva en 0,25 grados por minuto.
   Si la velocidad de giro está comprendida entre 1000 y 3000 rpm la temperatura se eleva en 0,4 grados por minuto.
   Si la velocidad de giro es mayor a 3000 rpm (revoluciones por minuto) la temperatura se eleva en 0,55 grados por minuto.

   Calcular la temperatura final del motor después de una hora de funcionamiento a la velocidad indicada.

4- Calcular la cantidad de remaches que puede colocar una remachadora automática en un determinado tiempo en función del diámetro
   del remache y del tipo de material,
   las opciones son:
   Tipo de material: 1:Aluminio o 2:Cobre
   Díametro del remache: 3mm, 4mm y 5mm
   Si se usa Aluminio de 3mm la máquina puede colocar 10 remaches por minuto
   Si se usa Aluminio de 4 o 5 mm la máquina puede colocar 8 remaches por minuto
   Si se usa cobre de 3 o 4mm se pueden colocar 6 remaches por minuto
   Si se usa cobre de 5mm se pueden colocar 5 remaches por minuto
   Usar una variable para ingresar el tipo de material (1 o 2)
   Usar una variable para ingresar el diámetro del remache (3, 4 o 5)
   Usar una variable para el tiempo de trabajo de la remachadora (valores enteros entre 1 hora y 8 horas).
   Calcular y mostrar la cantidad total de remaches que se pueden colocar con esos datos.
*/

#include <stdio.h>

float calcMin(){
    const int DIAMETRO = 100;
    const int CAUDAL = 3000; //cm3

    float pi = 3.14159254;
    float volumen, tiempo; 

    int altura;

    
    while(1){
        printf("\n Ingrese la altura del tanque: \n > ");
        scanf("%i", &altura);
        if(altura <= 50 && altura >=20){
            break;
        }
        printf("\n Carga de datos incorrectos, intente nuevamente");
    }

    volumen = pi * DIAMETRO * altura;
    tiempo = volumen / CAUDAL;

    printf("El tiempo que tarda en cargar %.2f cm3 es %.2f min", volumen, tiempo);

}

void main(){
    
    int op = 1;
    printf("\n\t\t\tEjercicios para examen:\n");
    while(op != 0){

        printf("\n > Ejercicio 1\n");
        printf(" > Ejercicio 2\n");
        printf(" > Ejercicio 3\n");
        printf(" > Ejercicio 4\n > ");
        scanf("%i", &op);

        switch(op){
            case 1:
                printf(" Calculadora de minutos: \n\n");
                calcMin();
                break;
            case 2:
                printf(" Ejercicio 2\n\n");
                break;
            case 3:
                printf(" Ejercicio 3\n\n");
                break;
            case 4:
                printf(" Ejercicio 5\n\n");
                break;
            case 5:
                printf(" \t\t\tSaliendo...\n\n");
                op = 0;
                break;
            default:
                printf("Ingreso de valor incorrecto, intente de nuevo\n");
        }
    }
}