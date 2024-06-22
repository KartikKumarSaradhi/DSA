#include<stdio.h>

int find_largest(int arr[],int n){
	
	int maxi = arr[0];
	for(int i =1;i<n;i++)
	{
		if (maxi<arr[i])
		{
		maxi= arr[i];
		}
	}
	return maxi;
	
}

int find_smallest(int arr[],int n){
	int mini = arr[0];
	for(int i =1;i<n;i++)
	{
		if (mini>arr[i]){
		mini = arr[i];
		}
	}
	return mini;
}

int find_sum(int arr[], int n){
	int sum = 0;
	for(int i = 0;i<n;i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{
	int n,i;
	printf("Enter the size of the array =/t");
	scanf("%d",&n);
	int arr[n];
	
	
	printf("\nEnter the elements into the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int mini = find_smallest(arr, n);
	int maxim = find_largest(arr, n);
	int sum = find_sum(arr, n);
	
	printf("\nThe largest element is :%d \t",maxim);
	
	printf("\nThe smallest element is : %d\t",mini);
	
	printf("\nThe sum of the array = %d\t ",sum);
	
	return 0;
	
}
