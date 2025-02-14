#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, sum=0, *ptr;
	printf("Enter the number of elements ");
	scanf("%d", &n);

	ptr= (int*) malloc(n*sizeof(int));
	if (ptr==NULL)
	{
		printf("Error! Memmory not allocated ");
		exit(1);
	}
	printf("\nEnter each and every element ");
	
	for (int i=0; i<n; i++){
		scanf("%d", ptr+i);
		sum+=*(ptr+i);
	}
	
	printf("The sum is %d", sum);
	free(ptr);

}