#include<stdio.h>
int main(){
    int a,b,add,sub;
    float div,mul;
    printf("enter aany two numbers:");
    scanf("%d %d",&a,&b);
    add= a+b;
    sub= a-b;
    mul= a*b;
    div= a/b;
        printf("the number are %d,%d,%f,%f",add,sub,mul,div);
    return 0;

}