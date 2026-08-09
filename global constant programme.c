// global  constant programm 

#include<iostream>
using namespace std;

const float PI=3.14;     //global constant 

int main()
{
int r, Area;
cout<<"Enter radius of circle"<<endl;
cin>>r;

Area= PI*r*r;

cout<<"Area of circle is "<<endl;
cout<<Area;

return 0;
}

