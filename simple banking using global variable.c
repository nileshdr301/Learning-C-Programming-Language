// simple banking using global variable

#include<iostream>
using namespace std;
int balance = 1000;  // global variable 
int deposite(int amt)
{
	balance += amt;
	return balance;
	
}

int withdraw(int amt)
{

if(balance>=amt)

}

return 0 }

int display()
{
	cout<<"Balance="<<balance<<endl;
	return 0;
	
}


int main()
{
	deposit(500);
	withdraw(200);
	display();
	
	return 0;
}

