#include <stdio.h>
int main(){
		char c;
	printf("Please enter your character ");
	scanf("%c", &c);
	
	(c>=97&&c<=122 )? printf("It is a lowered case letter") : printf(" \nIt is not a lowered case alphabet");
	(c>=0 && c<=47)||(c>=58 && c<=64)||(c>=91 && c<=96)||(c>=123 && c<=127) ? printf(" \nIt is an Special Symbol"): printf("\nIt is not an special symbol");	
	
}
	
	
	
