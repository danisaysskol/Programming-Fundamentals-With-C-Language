#include <stdio.h>
int main ()
{
	int i=5;
	int *j= &i;
	
	printf("The value of i    = %d", i);
	printf("\nThe value of i    = %d", *&i);
	printf("\nThe value of i    = %d", *j);
	printf("\nThe address of i  = %d", &i);
	printf("\nThe address of i  = %d", j);
	printf("\nThe address of i  = %d", *&j);
	printf("\nThe value of of j = %d", j);
	printf("\nThe address of j  = %d", &j);
	
	
	
	
}