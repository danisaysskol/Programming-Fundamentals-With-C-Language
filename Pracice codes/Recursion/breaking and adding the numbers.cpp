#include <stdio.h>
int sum(int x)
{
	int t;
	if (x==0)
		return 0;
		
	else 
		{
		t=x%10;	
		t=t+sum(x/10);

		}
	
	return(t);
}
//sgds
int main()
{
	int x= 544321;
	int total=sum(x);
	printf("\nThe total is %d", total);
}
