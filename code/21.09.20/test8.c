#include<stdio.h>

int main()
{
	int a=3;
	int b=5;
	a=a^b;
	b=a^b;
	
	printf("a=%d,b=%d",a,b);
	return 0;
 } 
