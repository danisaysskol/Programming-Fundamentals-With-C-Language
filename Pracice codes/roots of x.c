// Finding the values of x using quadratic formula
#include <stdio.h>
#include <math.h>
int main (){
int a,b,c, x1, x2;
printf("Enter the value of a ");
scanf("%d",&a);
printf("Enter the value of b ");
scanf("%d",&b);
printf("Enter the value of c ");
scanf("%d",&c);

int root= (b*b)-(4*a*c);
 root= sqrt(root);
 
int _b= -1*b;
int denom= 2*a;
int pos = (_b-root)/denom;
int neg= (_b+root)/denom;
printf("\nThe value of x1 is %d", pos);
printf("\nThe value of x2 is %d",neg);
}
