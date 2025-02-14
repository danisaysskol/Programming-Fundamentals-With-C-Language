#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	  
	char x[100];
	printf(" Enter the name ");
	gets(x);

	int size = strlen(x);
	
	int s=size;
	char rev[size];
	for (int i=0 ; i<s; i++)
	{
		rev[size-1]= x[i];
		size--;
	}
	
	puts(rev);
	
	
	
}