#include<stdio.h>
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%2==0 && num%3==0){
		printf("the number is divisible by both 2 and 3.");
	}else if(num%2==0){
		printf("the number is divisible by 2 only.");
	}else if(num%3==0){
		printf("the number is divisible by 3 only.");
	}else{
		printf("the number is not divisible by both 2 and 3. ");
	}
	return 0;
}