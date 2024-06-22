#include<stdio.h>
int main()
{
	int arr[]={22,44,78,39,24};
	int item, i, pos, flag=0;
	printf("enter the element to be searched");
	scanf("%d",&item);
	for(i=0;i<4;i++)
	{
		if(arr[i]==item)
		{
			pos=i;
			flag=i;
			break;
		}
	}
	if(flag==i)
	{
		printf("element found at %d",pos);
	}
	else
	{
		printf("element not available");
	}
}
