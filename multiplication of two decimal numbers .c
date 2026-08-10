// multiplication of two decimal numbers program

#include<stdio.h>
int main()
{
	float num1, num2, multiplication;
	printf("enter num1 : ");
	scanf("%f", &num1);
	
	printf("enter num2 : ");
	scanf("%f", &num2);
	
	multiplication = num1*num2;
	
	printf("the multiplicatio is : %f", multiplication);
	
	return 0;
}
