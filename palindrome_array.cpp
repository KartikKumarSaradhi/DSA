#include<stdio.h>
int is_Palindrone(int n)
{
	int s=0; m = n;
	while(n!=0)
	{
		int r = n%10;
		s= s*10+r;
		n = n/10;
	}	
	if(s==m)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n,i;
	printf("Enter the size of the array\t");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The palindrome number in the array are\n");
	for(i = 0;i<n;i++)
	{
		if(is_Palindrone(arr[i]))
		{
			printf("%d\t",arr[i]);
		}
	}
}
