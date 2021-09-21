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
			printf("它是:%d\n",arr[i]);
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
	printf("它是:%d\n",ret);
	return 0;
}*/

{
	char input[20]={0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在一分钟内关机，输入：我是猪，取消关机");
	scanf("%s",input);
	if(strcmp(input,"我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		
		goto again;
	}
	return 0;
}
	
