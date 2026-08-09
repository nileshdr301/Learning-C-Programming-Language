// modify global in function

#include<iostream>
using namespace std;
int b=0;    // global variable
int a (){
	b++;

}

int main(){
	
	a();
	a();
	a();   
	a();   // here no of time we add a()  that no is the output of this programe
	cout<<b;
	return 0;
	
	
	
	}



