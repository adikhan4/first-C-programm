//to print sum of two matrix
#include<stdio.h>
void main()
{
	int r,c,j,i;
	printf("enter the size of row and column");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],sum[r][c];
	printf("enter the element of 1st matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the element of 2nd matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
	    }
	}
	printf("sum of two matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum[i][j]);
	    }
	    printf("\n");
	}
	
}
