#include<stdio.h>
int main(){
	int num,num2;
	printf("enter the 4 digit number:");
	scanf("%d",&num);
	num2 = num%100;
	printf("the last 2 digit number is:%d ",num2);
	return 0;
}