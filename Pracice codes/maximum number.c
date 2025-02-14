#include <stdio.h>
main (){
	int x,y,z,low;
	low= -99999999999;
	printf("enter the numbers\n");
	scanf("%d %d %d", &x, &y, &z);

	if (x> low ){
		low=x;}

	if(y>low){
	low=y;}
	
	if (z>low){
		low=z;
	}
	printf("The greatest number is %d", low);
	}
