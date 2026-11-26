#include<stdio.h>
int main(){
    int num1,i,count=0;
    printf("enter the number:");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++){
        if(num1%i==0){
            count++;
                 }
                     }if(count==2){
        printf("the number is prime");
            }else{
                printf("the numbe is not a prime number");
                 }
                 return 0;

}