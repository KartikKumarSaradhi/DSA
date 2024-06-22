#include<stdio.h>
int main()
{
	int arr[]={22,44,78,39,22,24};
	int item, i, pos, flag=0,count = 0;
	printf("enter the element to be searched");
	scanf("%d",&item);
	for(i=0;i<7;i++)
	{
		if(arr[i]==item)
		{
			pos=i;
			flag=1;
			count++;
		}
	}
	if(flag==1)
	{
		printf("\nelement found at %d",pos);
		printf("\nElement found %d\t no. of times",count);
	}
	else
	{
		printf("element not available");
	}
}
