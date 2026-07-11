//to check if a matrix is a sparse matrix
#include<stdio.h>
void main()
{
	int r,c,i,j,count;
	printf("enter the row and column");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter the elements of matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			count++;
		}
	}
	printf("the elements of the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	if(count==(r*c)>r/2)
	printf("matrix is a sparse matrix");
	else
	printf("not a sparse matrix");
}
