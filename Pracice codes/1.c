#include <stdio.h>
int main()
{
	int a[3];
	
	int size;

	printf("Enter the number of elements ");
	scanf("%d", &size);
	
	printf("Please enter elements of Array ");

	for (int i=0; i<size; i++)
	scanf("%d", &a[i]);
	
	int t;
	printf("\nEnter the target ");
	scanf("%d", &t);
	
	for (int i=0; i<size-1; i++)
	{
		for (int j=i+1; j<size; j++)
		{
			if (a[i]+a[j]==t)
				printf("\n%d %d", i, j);
				break;
				break;
		}
		
	}	
	
	
}