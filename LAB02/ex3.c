#include <stdio.h>
#include <stdlib.h>

int main(){
    double elbuod [10] = {2,4,8,16,32,64,128,256,512,1024};
    int i = 0;
    while(i < 10){
        printf("\n%lf", *(elbuod + i));
        i++;
    }
    
    return 0;
}