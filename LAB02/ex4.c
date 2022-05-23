#include <stdio.h>
#include <stdlib.h>

int main(){
    int pedrao[10] = {0,1,2,3,4,5,6,7,8,9};
    int i = 10;
    while(i != 0){
        printf("\n%d", *(pedrao + i));
        i--;
    }
    
    return 0;
}