//global counters for function calls

#include<iostream>
using namespace std;

int callCount = 0;      // global variable 
int hello()
{
	
	callCount++;
	cout<<"Hello called "<<"times"<<endl;
	return 0;
	
}

int main ()
{
	hello();
	hello();
	hello();
	
	return 0;
	
}

