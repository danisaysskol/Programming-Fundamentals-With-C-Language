#include <stdio.h>
main(){
	int a[10], i, over;
	printf("Please Ener the working hours of each employee");
	for (i=0;i<=9;i++){
		scanf("\n%d", &a[i]);		
		}
		
	for (i=0; i<=9;i++){
		over= a[i]-40;
		if(over>0) 
		printf("The Extra Salary of the employee %d is Rs.%d\n",i, over*12 );
		
	}	
	
	
	
	
}