// Convverting km into meters, feet, inch and centimeters
#include <stdio.h>
int main (){
	float km, m, cm, f, i;
	printf("Please enter the distance in kilometers "); 
	scanf("%f", &km);
	 
	// formulas declaration
	m= 1000*km;
	cm= 100*m;
	f= m*3.28;
	i= f*12;
	printf("\n The value in meters is %f \n The value in cm is %f \n The value in feet is%f \n The value in inches is %f", m, cm, f, i);
	
	

	
	
}
