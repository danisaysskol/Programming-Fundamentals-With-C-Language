#include <stdio.h>
int star (int);
int main()
{
	int a=5;	
	star(a);
}
int star(int a)
{
	for (int i=0; i<6-a; i++)
	{
		printf("*");
	}
	printf("\n");
	if (a>1)
	star(a-1);
}