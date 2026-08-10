//temperature check

#include<stdio.h>
int main()
{
	int temp = 35;
	
	if(temp<10) printf("Very Cold");
	else if(temp<25) printf("Normal");
	else if(temp<40) printf("Hot");
	else printf("Very hot");
	
	return 0;
	
	
	
}
