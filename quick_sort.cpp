#include<stdio.h>
void quick_sort(int[],int,int);
int main()
{
	int arr[]={4,6,2,9,3,1,7};
	int i;
	quick_sort(arr,0,6);
	printf("after quick sort\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
	
}
void quick_sort(int a[],int l,int h)
{
	int low,high,key,temp;
	low=l;
	high=h;
	key=a[(l+h)/2];
	while(low<=high)
	{
		while(a[low]<key)
		{
			low++;
			
		}
		while(a[high]>key)
		{
			high--;
		}
		if(low<=high)
		{
			temp=a[low];
			a[low]=a[high];
			a[high]=temp;
			low++;
			high--;
		}
	}
	if(l<high)
	{
		quick_sort(a,l,high);
	}
	if(low<h)
	{
		quick_sort(a,low,h);
		
	}
	
}
