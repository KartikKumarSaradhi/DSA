#include<stdio.h>
#include<math.h>
int is_Prime(int num)
{
	int flag = 0;
	for(int i = 2;i<sqrt(num);i++)
	{
		if(num%i == 0){
			flag=1;
			break;
			
		}
		if(flag==0){
			return 1;
		}
	}
	return 0;
}

int largest_Prime(int arr[], int n)
{
	int max = arr[0];
	for(int i = 1;i<n;i++)
	{
		if(max<arr[i]){
			max =arr[i];
		}
	}
	printf("The Largest Prime number is %d\t",max);
}

int main()
{
	int n,count=0,i;
	printf("Enter the size of the array\t");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements into  the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(is_Prime(arr[i]))
		count++;
	}
	int prime[count];
	
	largest_Prime(prime,count);
	
	
	
}
