#include<stdio.h>
#define SIZE 10

void deletion(int arr[],int ub,int pos)
{
	for(int i = pos;i <= ub;i++)
	{
		arr[i] = arr[i+1];
	}

}
int main(){
	int arr[SIZE];
	int i,element,pos,n;
	
	printf("Enter the value of n\t");
	scanf("%d",&n);
	
	int ub=n-1;
	
	printf("Enter %d elements\n",n);
	for(i=0;i<=ub;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("The elements are:- \n");
	for(i=0;i<=ub;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	printf("\nEnter the position of the element =\t");
	scanf("%d",&pos);
	
	deletion(arr,ub,pos);
	
	printf("The elements after deletion  are:- \n");
	for(i=0;i<=ub-1;i++)
	{
		printf("%d\t",arr[i]);
	}
}
