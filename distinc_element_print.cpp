#include<stdio.h>
#include<stdbool.h>

int main(){
	int n,i,j;
	printf("Enter the size of the array\t");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter elements into the arrray\n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("The distinct elements are\t");
	for(i = 0;i<n;i++)
	{
		bool res = false;
		for(j= 0;j<n;j++)
		{
			
			if(arr[i]==arr[j] && i!=j)
			{
				
				res = true;
			}
		}
		if(!res){
			printf("%d\t",arr[i]);
		}
	}
}
