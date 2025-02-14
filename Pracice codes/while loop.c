#include <stdio.h>
int main(){
int p, n, count;
float r, si;
count=2;
while(++count<=3){
	printf("\nenter values of p n  and r");
	scanf("%d %d %f", &p,&n, &r);
	si= p*n*r;
	printf("The simple interest is = %.2f", si);
	count=count+1;

}





}