#include <stdio.h>
#include <String.h>

#include "StyleCMD.c"

// 2.0 calcular numeros punto flotante



int changeBase(){

    int number, base, baseFind, numberFind, rest;

    int elements;
    char file [50]= {" "};
    char fileOrder[50] = {" "}

    

    ast(3);
    printf("\n- Input the current number\n > ");
    scanf("%i", &number);
    printf("\n- Input the current base\n > ");
    scanf("%i", &base);
    printf("\n- Input the base number that you want to change\n > ");
    scanf("%i", &baseFind);
    ast(3);

    // number to decimal

    numberFind = number;
    
    for(int i=0; numberFind > 10; i++){
        numberFind /= 10;
        rest = numberFind % 10;
        file[i] = (char)rest;
        
    }

    // ask if the baseFind is 10
    if(baseFind != 10){
        // order
        elements = len(file);
        for(int i=0; i >= elements, i++){
            for(int j = elements; j >= i; j--){
                fileOrder[i] = file[j];
            }
        }
    
   // decimal to 
        for(int i=0; )
    
    
    }
    
    // binary - hexadecimal

    // answers
    printf("\n Number: %i\n Initial Base: %i\n\n NumberFind: %c\n Final Base: %i\n", number, base, numberFind, baseFind);
    ast(1);
}

void main (){
    int op;
    ast(1);
    printf("\n\n\t\t\t Functions of Math analytics\n\n\n");
    ast(1);
    while (1){
        ast(2);
        printf("\n> 1 - Chenge of base of the numbers");
        printf("\n> 2 - Resolution of ecuations");
        printf("\n> 3 - Calc of the matrix");
        printf("\n> 4 - Max-Min Parameters");
        printf("\n> 5 - Exit");
        printf("\n> Input your option\n> ");
        scanf("%i", &op);
        ast(2);

        if(op == 1){ 
            changeBase();
        }
        // else if(op == 2){
        //     // input the ecuations
        //     // change the ecuations
        // }
        // else if(op == 3){
        //     // input de matrix
        //     // select matrix clasification
        //     //  select method(chio, sarrus, frobeniuns, rouche frobenius)   
        //     // calc and return matrix identify 
        // }
        // else if(op == 4){
        //     // Input the functions - limits
        //     // max o min
        //     // calc and return
        // }
        else if(op == 5){
            ast(1);
            printf("\n\t\t\tOut the Promgram...\n\n");
            ast(1);
            break;

        }else{
            ast(1);
            printf("\n\t\t\twrong, input again\n");
            ast(1);
        }
    } 
}