// Modify global in function

#include<iostream>
using namespace std;

int count = 0;   // global variable

int add()
{
	count++;    // increase global variable by 1
	return 0;

}

int main()
{
	add();
	add();
	
	cout<<"Count = "<<count;    //print final value
	
	return 0;
}
