#include <stdio.h>

int star (int a)
{
	for (int i=0; i<a; i++)
		printf(" ");
	
	for (int i=0; i<6-a; i++)
	{
		printf(" *");
	}
	  
	printf("\n");
	
	if (a>0)
		star(a-1);
	else 
		return 0;
	
}

int main()
{
	int a=5;
	star(a);
}