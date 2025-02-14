// program to find factorial, prime number, even or odd, and exit the program
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char choice;
	int i=2;

	int num, num2=1, fact=1;
	printf("\nEnter the number");
	scanf("%d", &num);
	printf("Do You want Find the Find \nFactorial [F]\nPrime or not[P]\nEven or Odd [E/O]\nEXIT? [X]");
	scanf("\n%c", &choice);

	
	switch (choice){
		case 'F':
			while(num>0){
				fact= fact*num;
				num=num-1;
			}
				printf("%d", fact);
			break;
	
		case 'P':
				while(i<num){
				if(num%i==0) {
					printf("The Number is not Prime");
					break;
				}
				
				i=i+1;
				if(i==num) printf("The Number is a prime");
				}
				break;
		case 'E':
		case 'O':
				if (num%2==0) printf("The Number is an even");
				else printf("The number is an Odd");
				break;
		case 'X':
				exit(0);
			}
		
			
}
		
	
		