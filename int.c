#include<stdio.h>
int main()
{
	int num;
	printf("enter the number to find wether it's positive,negative or zero:");
	scanf("%d",&num);
	if(num>0){
		printf("the number is positive.");
		}else if(num<0){
        printf("the number is negative.");			
		}else{
			printf("the number is zero.");
		}
		return 0;
		
}