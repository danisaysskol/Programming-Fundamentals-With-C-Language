/*Calculation of Simple Interest*/
#include<stdio.h>
int main()
{
	int p,t;
	float r,si;
	
	printf("Enter the value of pricipal \nNOTE: Principle must be between 100 Rs. To 1,000,000 Rs. ");
	scanf("\n %d", &p);
	
	printf("\nEnter the time period \nNOTE: It must be between 1-10 years ");
	scanf("\n %d", &t);
	
	printf("\nEnter the rate of interest \nNOTE: It must be between 5-10 ");
	scanf("\n %f", &r);

	/*formula for simple interest*/
	si = p*r*t/100;
	
	printf ("\nYour Simple Interest is %.2f\n",si);	
	}
