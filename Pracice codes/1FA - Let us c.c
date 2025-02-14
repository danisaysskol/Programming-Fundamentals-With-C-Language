// Ramish's gross salary calculator
#include <stdio.h>
int main (){
	float s;
	printf("Please enter the gross salary of Ramish ");
	scanf("%f", &s);
	
	//da is dearness allowance // ha is house rent allowance
	float da= 40*s/100;
	float ha= 20*s/100;
	
	s= s+ da + ha;
	printf(" \nThe gross salary of Abdullah is %f", s);
	
	
	
	
}
