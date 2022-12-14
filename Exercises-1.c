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
    int select;
    printf("Start Promgram");
    while (select != 12){
        printf("\n\nSelect any option(-1 Exit):\n");
        printf("> 1 -Muestre del 1 al 100 \n");
        printf("> 2 -Muestre los numeros del 100 al 1 \n");
        printf("> 3 -Muestre numeros pares del 1 al 100 \n");
        printf("> 4 -Muestre suma de todos los numeros impares 1 al 100 \n");
        printf("> 5 -Mostrar intervalo entre numeros ingresados \n");
        printf("> 6 -Suma de numeros entre dos numeros a ingresar \n");
        printf("> 7 -Mostrar cantidad de asteriscos entre 1 y 80 \n");
        printf("> 8 -Tabla de numeros del 1 al 10 \n");
        printf("> 9 -Tabla de multiplicacion del 1 al 10 \n");
        printf("> 10 -Calcular numero factorial \n");
        printf("> 11 -Testeo de numero primo \n");
        printf("> 12 -Exit \n");
        printf("Select your option: ");
        scanf("%i", &select);

        if(select == 1){

            for(int i=1; i<=100 ; i++){
                //More organization in the console
                if(i % 10 == 0){
                    printf("\n");
                }
                printf("%i ", i);
            }  

        }else if(select == 2){

            for(int i=100; i>=1 ; i--){
                //More organization in the console
                if(i % 10 == 0){
                    printf("\n");
                }
                printf("%i ", i);

            }
        }else if(select == 3){

            for(int i=1; i<=100 ; i++){
                //More organization in the console  
                if(i % 2 == 0){
                    printf("%i ", i);
                }
                if(i % 10 == 0){
                    printf("\n");
                }

            }
        }else if(select == 4){
            int impar= 0;
            for(int i=1; i<=100; i++){
                if(i%2 == 1){
                    printf("%i", i);
                    impar += i;
                }
            }
            printf("Suma de impares es %i", impar);

        }else if(select == 5){
            int n1, n2,may,min;

            printf("\nIngrese 2 numeros para mostrar sus intervalos \n");
            printf("N1: ");
            scanf("%i", &n1);
            printf("N2: ");
            scanf("%i", &n2);

            if(n1<n2){
                may = n2;
                min = n1;
            }else{
                may = n1;
                min = n2;
            }
            // TEST
            printf("The major is %i\n", may);
            printf("The menor is %i\n", min);

            for(int i=min; i <=may; i++){
                printf("%i ", i);
            }

        }else if(select == 6){
            int n1,n2;
            int sum = 0;

            printf("\nIngrese 2 numeros para mostrar sus intervalos \n");
            printf("N1: ");
            scanf("%i", &n1);
            printf("N2: ");
            scanf("%i", &n2);

            if(n1<n2){
                for(int i=n1; i<=n2; i++){
                    printf("%i ",i);
                    sum += i;
                }
                printf("\nLa suma entre los valores ingresados es %i\n", sum);

            }else{
                printf("El primer numero ingresado no es menor al segundo, reintente");
            }
        }else if(select == 7){
            int a;

            printf("\nIngrese un numero entre 1 y 80: \n");
            scanf("%i", &a);
            
            if(a>=1 && a<=80){
                for(int i=1; i<=a; i++){
                    printf("* ");
                    //Orden
                    if(i%10 == 0){
                        printf("\n");
                    }
                }
            }
            else{
                printf("\nLos valores ingresados son incorrectos \n");
            }
            
        }else if(select == 8){
            for(int i=1; i<=100 ; i++){
                //More organization in the console
                if(i % 10 == 0){
                    printf("\n");
                }
                printf("%i ", i);
            }  
        }else if(select == 9){
            int a, table;

            printf("\nIngrese un numero del 1 al 10:\n");
            scanf("%i", &a);

            printf("Tabla del %i: \n",a);
            for(int i=1; i<=10; i++){
                table = a * i;
                printf("> %i x %i = %i\n",a, i, table);
            }
        }else if(select == 10){
            int f, cont; 
            int i = 1;

            printf("\nIngrese un numero para calcular su factorial: \n");
            scanf("%i", &f);

            cont = f;
           do{
                cont *= f;
                i++;
           }while(i != f);

            printf("\nEl factorial de %i es %i",f, cont);

        }else if(select == 11){
            //Recorre desde el 2 hasta el valor que sea para averiguar si existe otro divisor
            int p, flag;
            int div = 0;

            printf("\nIngrese un valor para averiguar si es primo: \n");
            scanf("%i", &p);

            printf("TEST_CONT : \n");
            if(p >= 0){
                for(int i=1; i <= p; i++){  
                    flag = p - i;
                    if((p% i != 0 && flag != 0) || (p%i == 0 && flag == 0)){
                        div += 1;
                    }

                    //TESTING
                    printf("%i ", i);  
                    printf(" %i \n", div);

                }
                if(div == 0 && p != 1 && p != 2){
                    printf("\nEl numero %i 'Si' es primo", p);
 
                }else{
                    printf("\nEl numero %i 'NO' es primo", p);              
                }
                
            }else{
                printf("\nEl numero es negativo");
            }
        }else{
            printf("The input value is not valid");
        }
    }
    printf("Program Finished");

}