#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char bits[4];
    long long bits_;
    int i = 0;
    int value = 0;
    while(i < 4){
            printf("Informe o %dº bit: ",i+1);
            setbuf(stdin, NULL);
            scanf("%c", &bits[i]);
        i++;
    }
    bits_ = atoi(bits);
    printf("%lld", bits_);
    int rem;

    i=0;
    
    while (bits_!=0) {
        rem = bits_ % 10;
        bits_ /= 10;
        value += rem * pow(2, i);
        ++i;
    }

    printf("\n%d", value);
    return 0;

}