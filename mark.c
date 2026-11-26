#include<stdio.h>
int main(){
	int mark;
	printf("enter the mark obtain:");
	scanf("%d",&mark);
	if(mark>=80){
		printf("you got distinction.");
	}else if(mark>=60){
		printf("you got first division.");
	}else if(mark>=40){
		printf("you are passed the exam.");
	}else{
		printf("you are failed the exam.");
	}
	return 0;
}