// find grade

#include<stdio.h>
int main()
{
	int marks = 82;
	
	if(marks>90)
	{printf("A grade");
	}
	
	else if(marks>=75)
	{printf("B grade");
	}
	
	else if(marks >=60)
	{printf("C grade");
	}
	
	else{
		printf("fail");
	}
	return 0;
}
