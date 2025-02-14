#include <stdio.h>
int main(){
	int x, y;
	printf("Enter the first number x ");
	scanf("%d",&x);
	printf("Enter the second number y ");
	scanf("%d",&y);
	
	printf("\n%d AND %d is %d",x,y, x&&y);
	printf("\n%d AND %d is %d",y,x,y&&x);
	printf("\n%d AND %d is %d",x, x, x&&x);
	printf("\n%d AND %d is %d\n",y,y, y&&y);
	
	printf("\n%d OR %d is %d",x,y, x||y);
	printf("\n%d OR %d is %d",y,x, y||x);
	printf("\n%d OR %d is %d",x, x, x||x);
	printf("\n%d OR %d is %d",y,y, y||y);
	
	printf("\n\nThe NOT of %d is %d",x, !x);
	printf("\nThe NOT of %d is %d",y, !y); 	
}
