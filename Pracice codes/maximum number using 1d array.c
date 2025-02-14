// finding the maximum between 10 numbers using 1D array
#include <stdio.h>
int main(){
	int a[10], max=-99999999999, i;
			printf("Please enter 10 numbers ");
	for (i=0;i<10;i++){
		scanf("%d", &a[i]);
		if(a[i]>max) max=a[i];
}
printf("The maximum number is %d", a[9]);	

}