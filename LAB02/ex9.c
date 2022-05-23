#include <stdio.h>

int function1(int x, int y);
int function2(int x, int y);

int main(){
    int x = 1, y = 2, constante = 4, response, response_;
    printf("\nResultados: %d %d", function1(x, constante), function2(y, constante));
    return 0;
}

int function1(int x, int y){
    return (x * y);
}

int function2(int x, int y){
    return (x * y);
}
