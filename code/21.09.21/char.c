#include<stdio.h>
int main()
{
	char ch='w';
	char*pc=&ch;
	printf("%d\n",sizeof(pc));
	//*pc='a';
	//printf("%c\n",ch);
	return 0;
}
