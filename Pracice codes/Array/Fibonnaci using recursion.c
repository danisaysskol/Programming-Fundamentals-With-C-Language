#include <stdio.h>
int fib(x);
int main()
{
	int x;
	printf("Enter the number of terms ");
	scanf("%d", &x);
	fib(0, 1,x);
}
int fib(int a, int b)
{	
	int sum;	
	
	if (a<=b)
	{
		sum=fib(a+1, b);
		printf("%d\n", sum);
	}
	
	
}