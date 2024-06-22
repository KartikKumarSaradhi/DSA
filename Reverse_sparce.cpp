#include<stdio.h>
int main()
{
	int tp[4][3]={{4,5,3},{0,4,9},{1,2,5},{3,3,8}};
	int i,j,m,n,k=1;
	m=tp[0][0];
	n=tp[0][1];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(tp[k][0]==i && tp[k][1]==j)
			{
				printf("%d\t",tp[k][2]);
				k++;
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
