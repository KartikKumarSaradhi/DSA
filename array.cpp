#include<stdio.h>
#define SIZE 10

void insert(int arr[],int ub,int pos, int ele)
{
	for(int i = ub;i >= pos;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos] = ele;

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
	printf("\nEnter the element = \t");
	scanf("%d",&element);
	printf("Enter the position of the element =\t");
	scanf("%d",&pos);
	
	insert(arr,ub,pos,element);
	
	printf("The elements after insertion  are:- \n");
	for(i=0;i<=ub+1;i++)
	{
		printf("%d\t",arr[i]);
	}
}
