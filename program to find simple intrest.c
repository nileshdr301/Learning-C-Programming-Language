// program to find simple intrest

#include<stdio.h>
int main()
{
	float principle, rate, time, simple_intrest;
	
	printf("enter principle amount : ");
	scanf("%f", &principle);
	
	printf("enter rate of loan : ");
	scanf("%f", &rate);
	
	printf("enter time duration of loan : ");
	scanf("%f", &time);
	
	simple_intrest= (principle*rate*time)/100;
	
	printf("The simple intrest is :%f \n",  simple_intrest);
	return 0;
}
