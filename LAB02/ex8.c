#include <stdio.h>

int calcula_area(int x1, int y1, int x2, int y2);

int main(){
    int x1 = 1, x2 = 2, y1 = 1, y2 = 2, response;
    response = calcula_area(x1, y1, x2, y2);
    printf("\nÁrea eh: %d", response);
    return 0;
}

int calcula_area(int x1, int y1, int x2, int y2){
    int area = (x1 - x2) * (y1 - y2);
    if(area < 0) return (area * (-1));
    else return area;
}