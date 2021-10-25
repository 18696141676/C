#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%S",password);
		if(strcmp(password, "123456") == 0)
		{
			printf("µÇÂ½³É¹¦\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
	}
	if(i==3)
		printf("Èý´ÎÃÜÂë¾ù´íÎó£¬ÍË³ö³ÌÐò\n");
	return 0;
} 
