#include<iostream>
using namespace std;

int arr[5]={10,20,30,40,50}; 	//global array

int printArr()
 {
 for(int i=0; i<5; i++)
{
	cout<<arr[i]<<" ";   // print array elements
	
}

return 0;
}



int main()
{ printArr();      //function call
return 0;
}
