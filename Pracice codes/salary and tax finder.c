#include <stdio.h>
main (){
float s,t;
	printf("Enter Your Salary Please ");
	scanf("\n%f", &s);
	printf("Enter Your Tax Rate Please ");
	scanf("\n%f", &t);

t= (t*s)/100;
s= (s-t);

printf("\nThe amount of salary you will recieve is %.1f", s);
printf("\nThe amount of tax deduced is %.1f", t);
}
