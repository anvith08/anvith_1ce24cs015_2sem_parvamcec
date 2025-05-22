#include <stdio.h>

int main(){
    int l, b, area;
    printf("Enter l and b : ");
    scanf("%d %d", &l,&b);
    area = l*b;
    printf("Area of rectangle = %d m^2\n", area);
    return 0;
}