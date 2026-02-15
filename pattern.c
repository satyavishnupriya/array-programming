#include<stdio.h>
int main()
{
	int row,col;
	printf("enter the number rows and coloumns:\n");
	scanf("%d %d",&row,&col);
	int i,j;
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=col-1;j++)
		{
			if(i==0||j==0||i==row-1||j==col-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
	}
	printf("\n");
	return 0;
}
