#include <stdio.h>
int main(){
	char c;
	printf("Please enter your character ");
	scanf("%c", &c);
	if (c>=65 && c<=90) 
		printf("It is a Captial letter");
	if (c>=97 && c<=122)
		printf("It is a Small letter");
	if (c>=48 && c<=57)
		printf("It is a Number");
	if ((c>=0 && c<=47)||(c>=58 && c<=64)||(c>=91 && c<=96)||(c>=123 && c<=127))
		printf("It is an Special Symbol");	
}
