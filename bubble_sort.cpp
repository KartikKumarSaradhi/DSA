#include<stdio.h>

int main(){
	int arr[] = {44, 33, 55, 11, 22};
	int i, j, temp;
	for(j = 4;j>=0;j--){
		for(i = 0;i<j;i++)
		{
			if(arr[i] > arr[i+1]){
				temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
			}
			
		}
	}
	
	printf("The sorted array is\t ");
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
}
