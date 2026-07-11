//to print sum of all diagonal elements of matrix
#include<stdio.h>
void main()
{
	int r,c,j,i;
	printf("enter the size of row and column");
	scanf("%d%d",&r,&c);
	int a[r][c],sum=0;
	printf("enter the element of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			sum=sum+a[i][j];
			else
			printf("inavlid matrix");
			
		}
	}
	printf("sum of diagonal elements:%d",sum);
}
