#include<stdio.h>
int main(){
    float res;
    int a, b;
    char ope;

    printf("enter the operator: ");
    scanf(" %c", &ope);
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    res = (ope == '+') * (a + b) +
          (ope == '-') * (a - b) +
          (ope == '*') * (a * b) +
          (ope == '/') * (a / b);

    printf("The result is: %.2f\n", res);
    return 0;
}