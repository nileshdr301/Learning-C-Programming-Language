//Basic Global Variable program

#include<iostream>
using namespace std;
 
 int x=10;
 
 int main()
 {
 	
 	int x=20;
 	
 	cout<<"Local Variable "<<x<<endl;              // this will print local variable
 	cout<<"Global Variable "<<::x<<endl;            // use :: this to print global variable 
 	return 0;
 	
 }
