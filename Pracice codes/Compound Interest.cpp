/*Calculation of Simple Interest*/
/*By M Danish, Date: 2 Sept 2022*/
#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	
	p=1000;
	n=3;
	r=6.5;
	
	/*formula for simple interest*/
	si = p*n*r/100;
	
	printf ("%.1f\n",si);
	return 0;
	
	
	
	}
