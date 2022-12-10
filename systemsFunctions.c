#include<stdio.h>

// funciones de sistemas

int lisenKeyboard(){
    char keyboard;

    while(1){
        if(kbhit()){
            keyboard = getch();
            break;
        }
    }
    if((int)keyboard == 13){
        printf("\n <ENTER>");
        return 1;
    }
}

char print(char variable){
    return variable;
}