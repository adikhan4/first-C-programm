//to take input and print 2d array
#include<stdio.h>
void main()
{
	int r,c,j,i;
	printf("enter the size of row and column");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter the element of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the elements of matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
}
