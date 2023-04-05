#include<stdio.h>



int main(){
	int a,b,sum,subtract,multiply,division,modulo;
	printf("enter a= ");
	scanf("%d",&a);
	printf("enter b= ");
	scanf("%d",&b);
	sum=a+b;
	printf("the sum is : %d \n",sum);	
	subtract=a-b;
	printf("the subtraction is : %d \n",subtract);
	multiply=a*b;
	printf("the multiplication is : %d \n",multiply);
	division=a/b;
	printf("the division is : %d \n",division);
	modulo=a%b;
	printf("the modulo is : %d \n",modulo);
	
}
