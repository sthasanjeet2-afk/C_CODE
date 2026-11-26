  #include<stdio.h>
  int main(){
  	int a,b,c,t;
	printf("enter the value of a:");
  	scanf("%d",&a);
  	printf("enter the value of b:");
  	scanf("%d",&b);
    printf("enter the value of c:");
  	scanf("%d",&c);
    t= c;
    c = b;
    b = a;
    a = t;
  	printf("the value of a is: %d\n",a);
  	printf("the value of b is: %d\n",b);
    printf("the value of c is: %d\n",c);
 	return 0;
  }