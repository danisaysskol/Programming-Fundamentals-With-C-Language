// finding average of 10 numbers using 1D array
#include <stdio.h>
int main(){
	int a[10], sum=0, i;
			printf("Please enter 10 numbers ");
	for (i=0;i<10;i++)
		scanf("%d", &a[i]);
		
	for (i=0;i<10;i++)
		sum=sum+a[i];
		
	float avg=sum/10.0;
	printf("\nThe Sum is %f", avg);
	
	
	
	
}