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
		printf("����������:");
		scanf("%S",password);
		if(strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if(i==3)
		printf("��������������˳�����\n");
	return 0;
} 
