#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
int main()
/*{
	int arr[]={1,2,3,4,5,1,2,3,4};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		int count=0;
		int j=0;
		for(j=0;j<sz;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("����:%d\n",arr[i]);
			break;
		}
		
	}
	
	return 0;
}



{
	int arr[]={1,2,3,4,5,1,2,3,4};
	int i=0;
	int ret=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		ret=ret^arr[i];
	}
	printf("����:%d\n",ret);
	return 0;
}*/

{
	char input[20]={0};
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ������룺������ȡ���ػ�");
	scanf("%s",input);
	if(strcmp(input,"������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		
		goto again;
	}
	return 0;
}
	
