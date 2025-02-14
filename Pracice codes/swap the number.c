#include <stdio.h>
main (){
	int a, b;
	printf("Enter the Number A\n");
	scanf("%d", &a);
	
	printf("Enter the Number B\n");
	scanf("%d", &b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nA= %d",a);
	printf("\nB= %d",b);
}
