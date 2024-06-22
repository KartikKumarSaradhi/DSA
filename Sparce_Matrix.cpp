#include<stdio.h>
int main()
{
	int arr[100][100], tp[100][3];
	int i,j,m,n,nz=0;
	printf("Enters the row and column size \n");
	scanf("%d%d",&m,&n);
	printf("Enter elements inton the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++){
		
		scanf("%d", &arr[i][j]);
		if(arr[i][j]!=0)
		{
			nz++;
		}
	}
	}
	if(nz<m*n/2)
	{
		printf("This is a sparse martrix \n");
		tp[0][0]=m;
		tp[0][1]=n;
		tp[0][2]=nz;
		int k=1;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(arr[i][j]!=0)
				{
					tp[k][0]=i;
					tp[k][1]=j;
					tp[k][2]=arr[i][j];
					k++;
				}
			}
		}
		printf("The triplet matrix is \n");
		for(i=0;i<nz+1;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d \t", tp[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Not a sparse m,atrix");
	}
	return 0;
}
