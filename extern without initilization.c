//extern without initialization 
#include<iostream>
using namespace std;
int num(){
	extern int num;
	return 0;
	
}
