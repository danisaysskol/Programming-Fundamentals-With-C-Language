#include <stdio.h>
#include <string.h>
int main(){
	int x[3][3][3];
	printf("Enter the numbers");
	
	for (int i=0; i<3; i++)
	{
		printf("Enter the values of %d layer", i+1);
		for (int j=0; j<3; j++)
		{
			printf(" %d row\n", j+1);
			for (int k=0; k<3; k++)
			{  
				scanf("%d", &x[i][j][k]);	
			}
		}
	}
	printf("\n\n Each LAYERS OF RESPECTIVE MATRIX IS\n");

	for (int i =0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			for (int k=0 ; k<3; k++)
			{
				printf("%d ", x[i][j][k]);
			}
			printf("\n");
		}
	printf("\n\n");

	}
	
	
	
	
}