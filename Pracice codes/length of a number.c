#include <stdio.h>
int main(){
	int x;
	int length=0;
	int i;	
	printf("Please enter your number ");
	scanf("\n%d", &x);
	for (i=0; x>0; i++){
		x=x/10;
		length++;		
	}
	printf("\nThe length of this number is %d", length);	

	return 0;
}
