#include<stdio.h>
int main()
{
	
	int a,b,Addition,Substraction,Multiply,Division,Divisible;
	
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	Addition=a+b;
	Substraction=a-b;
	Multiply=a*b;
	Division=a/b;
	Divisible=a%b;
	
	printf("Addition=%d\n",Addition);
	printf("Substraction=%d\n",Substraction);
	printf("Multiply=%d\n",Multiply);
	printf("Division=%d\n",Division);
	printf("Divisible=%d",Divisible);
	
	return 0;
}
