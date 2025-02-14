#include <stdio.h>
void s(int);

int main()
{
	s(4);
}

void s(int a)
{
	if (a>2)
	printf("0");
	else 
	printf("1");
	
	if (a%2==0)
	printf(" 0");
	else 
	printf(" 1");
	
	printf("\n");
	
	if (a>1)
		s(a-1);
}