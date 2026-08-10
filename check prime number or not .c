// c program to check prime number or not 

#include<stdio.h>
int main()
{
	int given_number, i, factor_count=0;
	
	printf("Enter given_number");
	scanf("%d",&given_number);
	
	if(given_number <=1){
		printf("%d is not a prime number \n", given_number);
	}
	
	for(i=1; i<=given_number; i++){
		if(given_number % i == 0){
			factor_count++;
		}
	}

if(factor_count ==2){
	printf("%d is a prime number .\n", given_number);
	
} else{ 
printf("%d is not a prime number. \n", given_number);

}

return 0;
	
}
