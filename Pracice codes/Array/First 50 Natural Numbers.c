#include <stdio.h>

int nat(int a)
{
	if (a<=50)
	{
		printf("%d ", a);
		nat(a+1);
	}
	
}

int main()
{
	int a=1;
	nat(a);
}