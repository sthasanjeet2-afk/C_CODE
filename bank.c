#include<stdio.h>
int main(){
	int b=500,da,total,wa;
	char deposite='d',withdraw='w',a;
	printf("what you like to do d for deposite or w for withdraw:");
    scanf(" %c",&a);
	if(a == 'd' ){
		printf("how much would you like to deposite:");
		scanf("%d",&da);
		total= b + da;
		printf("the total balance is:%d",total);
		}else if(a == 'w'){
			printf("how much would you like to withdraw:");
			scanf("%d",&wa);
			if(wa>b){
				printf("insufficient balance.");
			}else{
				total= b-wa;
				printf("the total balance is:%d",total);
			}
		}	
return 0;
}