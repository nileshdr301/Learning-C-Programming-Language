// global is used in multiple functions 

#include<iostream>
using namespace std;
int sum=0;     //global variable
int add(int n){
	sum+=n;
	return sum;
	
}

int display(){
	cout<<"Sum="<<sum;
	return 0;
	
}

int main(){
	
	add(5);
	add(15);
	display();
	return 0;
}
