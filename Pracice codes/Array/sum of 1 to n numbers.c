#include <stdio.h>
int sum(int, int);

int main()
{
	int x;
	printf("Enter the last number of the sum ");
	scanf("%d", &x);
	int total=	sum(1, x);
	printf("%d", total);
}
int sum(int a, int b)
{
	int s;
	if(a<=b) //unless the number is less than last number
	{
		s= a+sum(a+1, b); //num +sum 
		return s; 
	}
	else 
	return 0;	// because returning zero will result in sum()=0, and the recursive call stops
}