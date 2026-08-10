//pass or fail

#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks out of 100");
	scanf("%d", & marks);
	
	if(marks<35)
	{printf("fail");
	}
	
	else
	{printf("pass");
	}
	return 0;
}
