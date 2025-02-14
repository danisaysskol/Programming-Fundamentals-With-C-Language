#include<stdio.h>
// Program to find the area of circle, square and rectangle
int main(){
	
float x, pi= 3.142;
int  rc; //ra is radius of circle
	printf("Enter the radius of the circle ");
	scanf("%d", &rc);
	x= rc*rc*pi;
	printf("The Area of the Circle is %.2f\n", x);

	
int lt, y; //lt is the length of the square

	printf("\nEnter the length of the square ");
	scanf("\n%d", &lt);
	y= lt*lt;
	printf("The Area of the Square is %d", y);
	
int lr, wr, z; //lr is the length of the rectangle and wr is width of it

	printf("\n\nEnter the length of the rectangle ");
	scanf("\n%d", &lr);
	printf("Enter the width of the rectangle ");
	scanf("\n%d", &wr);
	z= lr*wr;
	printf("The Area of the Rectangle is %d", z);		
	
}
