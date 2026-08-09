//simple intrest programme 

#include <iostream>
using namespace std;
int main()
{
	float principle , rate, time , simple_intrest;
	
	cout<<"Enter principle amount"<<endl;
	cin>>principle;
	
	cout<<"Enter rate of intrest"<<endl;
	cin>>rate;
	
	cout<<"Enter time of loan"<<endl;
	cin>>time;
	
	simple_intrest = (principle*rate*time)/100;
	
	cout<<"simple_intrest is "<<endl;
	cout<<simple_intrest;
	
	return 0;
	 
	
	
}
