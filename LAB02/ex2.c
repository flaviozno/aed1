#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100] = "Jose Augusto";
    char *ptn;
    int i = 0;
    do{
        *ptn = nome[i];
        printf("%c", *ptn);
        i++;
    }while(*ptn != '\0');
    
return 0;
}