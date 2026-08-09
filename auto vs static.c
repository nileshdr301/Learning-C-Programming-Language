// auto vs static
#include<studio.h>
void demo()
{

auto int a=0;
statc int b=0;
a++;
b++;
printf("a=%d, b=%d/n", a,b);
}

int main(){
	demo();
	demo();
	return 0;
}


