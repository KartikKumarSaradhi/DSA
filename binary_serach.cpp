#include<stdio.h>

int main()
{
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	
	int arr[n],i,item;
	
	printf("Enter the elemnents into the array in sorted manner");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the item to be searched\t");
	scanf("%d",&item);
	int lb=0,ub=n-1,mid = (lb+ub)/2;
	
	
	
	while(lb<=ub){
		if(item < arr[mid]){
			ub = mid-1;
		}
		else if(item > arr[mid]){
			lb = mid+1;
		}
		else if(item == arr[mid]){
			printf("The element found at position %d\t",mid+1);
			break;
		}
		else{
			printf("Element not found");
		}
		
		mid = (lb+ub)/2;
	}

}	

