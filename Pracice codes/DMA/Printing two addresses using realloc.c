#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1, n2, *ptr;
	
	printf("Enter the number of elements ");
	scanf("%d", &n1);
	
	ptr= (int*) calloc(n1,sizeof(int)); //allocating using calloc
//	ptr= (int*) malloc(n1*sizeof(int));		//You can also allocate using malloc

	printf("The Addresses are: \n");
	
	for (int i=0; i<n1; i++)
	{
		printf("%u\n", ptr+i);
	}
	printf("\nEnter the new size: ");
	scanf("%d", &n2);
	
	ptr= realloc(ptr, n2*sizeof(int)); //reallocating
			
	printf("The new addresses are\n");
	for (int i=0 ; i<n2; i++)
	{
		printf("%u\n", ptr+i);
	}
}