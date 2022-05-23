#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 40;
    int *p = &a;
    printf("%d",p);
    printf("\n%d",a);
    printf("\n%d",&a);
    printf("\n%d", *p);

    printf("\nAlterando o valor da variavel a: ");
    scanf("%d", *p);
    &a = p;
    printf("%d", a);
    
    return 0;
}


