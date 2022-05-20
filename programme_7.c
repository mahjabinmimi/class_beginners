#include<stdio.h>
int main()
{
	
	double a,b,addition,substraction,multiply,division;
	
	printf("Enter a double number:");
	scanf("%lf",&a);
	printf("Enter a double number:");
	scanf("%lf",&b);
	
	addition=a+b;
	substraction=a-b;
	multiply=a*b;
	division=a/b;
	///divisible=a%b
	
	printf("Addtion=%.6lf\n",addition);
	printf("Substration=%.6lf\n",substraction);
	printf("Multiply=%.6lf\n",multiply);
	printf("Division=%.6lf",division);
	
	return 0;
	
}
