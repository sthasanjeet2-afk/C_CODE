#include<stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	n +=10;
	n *=2;
	n -=1;
	printf("the final value of n is: %d", n);
	return 0;
}