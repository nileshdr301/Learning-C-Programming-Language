#include<iostream>
int count=0;
void increment(){
	count++;
}

int main(){
	increment();
	increment();
	
	printf("count=%d",count);
	return 0;

}
