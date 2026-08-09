//basic extern variable 
file1.c
#include<iostream>
using namespace std;
int x=100;
int main()
{
	extern int x;
	cout<<x;
	return 0;
}
