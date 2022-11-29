#include <stdio.h>

#include "StyleCMD.c"

float changeBase(){

    float number, base, baseFind;

    ast(3);
    printf("\n- Input the current number\n > ");
    scanf("%f", &number);
    printf("\n- Input the current base\n > ");
    scanf("%f", &base);
    printf("\n- Input the base number that you want to change\n > ");
    scanf("%f", &baseFind);
    ast(3);

    // binario

    // octal

    // decimal
    printf("\n Number: %.2f\n Initial Base: %.2f\n Final Base: %.2f\n", number, base, baseFind);
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
        printf("\n> 2 - ");
        printf("\n> 3 - ");
        printf("\n> Input your option\n> ");
        scanf("%i", &op);
        ast(2);

        if(op == 1){
            changeBase();
        }
        else if(op == 3){
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