#include<stdio.h>
int main()
{
	
	float num1,num2,addition,substraction,multiply,division;
	
	printf("Enter the value of num1:");
	scanf("%f",&num1);
	printf("Enter the value of num2:");
	scanf("%f",&num2);
	
	addition=num1+num2;
	substraction=num1-num2;
	multiply=num1*num2;
	division=num1/num2;
	////Divisible=num1%num2
	
	printf("Addition=%.4f\n",addition);
	printf("Substraction=%.4f\n",substraction);
	printf("Multiply=%.4f\n",multiply);
	printf("Division=%.4f",division);
	return 0;
}
