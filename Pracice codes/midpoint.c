#include <stdio.h>
#include <math.h>
int main(){
	int x1,x2,y1,y2;
	
printf("Enter the value of X1 ");
scanf("%d", &x1);
printf("Enter the value of X2 ");
scanf("%d", &x2);
printf("Enter the value of Y1 ");
scanf("%d", &y1);
printf("Enter the value of Y2 ");
scanf("%d", &y2);
	
	int x3= pow(x2-x1,2);
	int y3= pow(y2-y1,2);
	int dist= sqrt(x3+y3);
	printf("\n\nThe Distance is %d", dist);
	
	int m1= (x1+x2)/2;
	int m2= (y1+y2)/2;
	printf("\nThe Midpoint is %d,%d", m1,m2); 
}
