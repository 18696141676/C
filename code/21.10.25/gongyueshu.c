#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int r=0;
	scanf("%a%b", &a, &b);
	while(r=a%b)
	{
		b=r;
		a=b;
	}
	printf("%d\n", b);
	return 0;
}
