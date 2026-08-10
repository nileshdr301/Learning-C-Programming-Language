#include<stdio.h>
int main()
{
	int units = 250;
	int bill = 0;
	
	if(units <= 100) 
	    bill = units * 5;  // 1-100 units = 5 Rs
	else if(units <= 200) 
	    bill = 100*5 + (units-100)*7;  // 101-200 units = 7 Rs
	else 
	    bill = 100*5 + 100*7 + (units-200)*10; // 200+ units = 10 Rs

    printf("Bill = %d", bill);
    return 0;
}

