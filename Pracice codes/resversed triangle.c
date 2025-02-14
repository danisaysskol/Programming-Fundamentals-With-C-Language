#include <stdio.h>
int main(){
	int test=5;
	int a, b,c;
	for(a=0; a<5; a++){
		for (b=0; b<=a; b++){
			printf(" ");
		}	
		for (c=0; c<test; c++){
			printf("* ");
		}
			test=test-1;
			printf("\n");		
	}
	
	
}
