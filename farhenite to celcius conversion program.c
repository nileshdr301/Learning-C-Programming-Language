// farhenite to celcius conversion program 

#include<stdio.h>
int main()
{
	int farhenite, celcius;
	
	printf("enter temperature in farhenite : ");
	scanf("%d", &farhenite);
	
	celcius = (farhenite-32)*5/9;
	
	printf("The temperature in celcius is : %d ", celcius);
	return 0;
}
