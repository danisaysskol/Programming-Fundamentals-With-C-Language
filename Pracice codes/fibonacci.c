#include <stdio.h>
int main(){
	
	int first=0, second=1, i, j, sum;
	
	printf("Enter the number of series you want to print?");
	scanf("%d", &j);
	
	for(i=0; i<j; i++){
	if(i==0) printf("0");
	if (i==1) printf(" 1");
	if(i>1){
		sum=first+second;
		first=second;
		second=sum;
		printf(" %d", sum);
	}
}

	
	
	
	
	
	
	
	
	
	
}