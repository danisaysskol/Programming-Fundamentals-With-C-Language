#include <stdio.h>

int main(){
	int test=0;
	int a, b , c;
	for( a=3; a>0; a=a-1){
		
	for (b=0; b<a; b++){
		printf(" ");
	}
	for (c=0; c<=test; c++ ){
		printf("*");
	}
	test=test+2;
	printf(" \n");
}
	
	test=3;
	a=0; b=0; c=0;
	
	for(a=0; a<2; a++){
			b=0;
		for (c=a+1; b<=c; b++){
			printf(" ");
		}	
		for (c=0; c<test; c++){
			printf("*");
		}
			test=test-2;
			printf(" \n");		
	}
}
