#include <Stdio.h>
int main()
{
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<i; j++)
		{
			printf(" ");
		}
		printf("*");
		for (int k=5; k>i; k--)
		{
			printf("  ");
		}
		printf("*");
		printf("\n");
	}
	for (int i=5; i>0 ;i--)
	{
		for (int j=0; j<i;j++)
		{
			printf(" ");	
		}
		printf("*");
		for (int k=0; k<5-i; k++)
		{
			printf("  ");		
		}		
		printf("*");
		printf("\n");
	}
} 