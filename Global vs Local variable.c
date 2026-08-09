//Global vs Local variable
#include<iostream>
using namespace std;

int num=100; //global variable

int test(){
	int num=50;   //local variable
	cout<<"local num "<<num<<endl;
	return 0;
	}


int main()
{
	
 	test() 	
	 cout<<"global num "<< num <<endl;	
	 return 0; }


