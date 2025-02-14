#include <stdio.h>
int main(){
	int x=1553; 
	int length=0;
	int i;
	printf("test\n");	

	for (i=0; x>0; i++){
		x=x/10;
		length++;		
	}
	printf("%d", length);	

	return 0;
}
