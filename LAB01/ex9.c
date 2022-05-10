#include <stdio.h>

int main(){
    
     char string[100];
     int i = 0;

     printf("Informe sua string: "); 
     scanf("%[^\n]", string);

     while( string[i] != '\0' ) 
     {
        if( string[i] >= 'a' && string[i] <= 'z' )
           string[i] = string[i] - 32;
        i++;
     }

     printf("A saida eh: "); 
     puts(string);

     return 0;
}