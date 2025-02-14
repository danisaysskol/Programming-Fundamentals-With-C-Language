#include <stdio.h>
#include <string.h>
int main()
{
	int a[4][4];
	printf("Enter the Numbers ");
	for (int i=0;i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			scanf(" %d", &a[i][j]);
		}
	}
	int x;
	
	printf("Which number do you want to search?");
	scanf(" %d", &x);
	
	int num; int r[16], c[16], row=0, col=0;
	
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			if (a[i][j]==x)
			{
				num++;
				r[row]=i;
				c[col]=j;
				row++;
				col++;
			}
		}
	}
	if (num)
	{
		printf("The number is present in the 2D Array");
		
		for (int i=0; i<num; i++)
		{
			printf(" %d%d", r[i],c[i]);
		}
	}
	
	
}