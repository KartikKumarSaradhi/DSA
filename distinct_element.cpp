#include<stdio.h>
#include<stdlib.h>

int compare(void const *a, void const *b){
	return (*(int *)a - *(int *)b);
}

int main()
{
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	
	int arr[n],i,count=0;
	
	printf("Enter the elemnents into the array in sorted manner");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	qsort(arr, n, sizeof(int), compare);
	
	for(i=1;i<n;i++){
		if(arr[i] != arr[i-1]){
			count++;
		}
	}
	
	printf("The count is %d\t",count);

}	

