#include <stdio.h>
int main(){
	int h,t; // h= hardness c=carbon t= tensile
	float c;
	printf("Enter the hardness? ");
	scanf("%d",&h);
	printf("\nEnter the content of Carbon? ");
	scanf("%f",&c);
	printf("\nEnter the strength of Tensile? ");
	scanf("%d",&t);
	
	if ((h>50)&&(c<0.7)&&(t>5600))
	printf("\nGRADE 10");
	
else if  ((h>50)&&(c<0.7))
	printf("\nGRADE 9");
	
else if ((c<0.7)&&(t>5600))
	printf("\nGRADE 8");
	
else if ((h>50)&&(t>5600))
	printf("\nGRADE 7");

else if ((h>50)||(c<0.7)||(t>5600))
	printf("\nGRADE 6");
else 
	printf("\nGRADE 5");	
}
