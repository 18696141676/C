#include<stdio.h>
int main()
{
	int a=10;
	int* p=&a;
	printf("%p\n",&a);
	printf("%p\n",p);
	*p=20;
	printf("a=%d\n",a);
	//printf("%p\n",&a);
	return 0;	
}
