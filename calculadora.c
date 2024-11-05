#include <stdio.h>

int main()
{
    float a, b ;
    printf("digite um numero: ");
    scanf("%f",&a);
    printf("digite um numero: ");
    scanf("%f",&b);
    
    printf("soma: %.2f \n", a +b);
    printf("subtração:%.2f \n", a -b);
    printf("divisor:%.2f \n", a / b);
    printf("multiplicação:%.2f \n", a * b);
    return 0;
}