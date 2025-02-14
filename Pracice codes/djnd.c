#include <stdio.h>
int main(){
	int age;
	char sex, loc, heal;
	
	printf("Enter your age please");
	scanf("%d", &age);
	printf("Enter your sex please? \n (M= Male F= Female) ");
	scanf("%c", &sex);	
	printf("Enter your location please\n (C= city V= Village) ");
	scanf("%c", &loc);
	printf("Enter your health condition please? \n (E= Excellent P= Poor)");
	scanf("%c", &heal); 
  	
	if ((age>=25&&age<=35)&&(sex=='M'||sex=='m')&&(loc=='c')&&(heal=='E')){		  
		printf(" \nThe Person is insured \nHence the Premium rate  is Rs. 4/1000  \nMaximum amount for insurance is Rs. 2 lakhs");}
	else if ((age>=25&&age<=35)&&(sex=='F')&&(loc=='c')&&(heal=='e')){		 
		printf(" \nThe Person is insured \nHence the Premium rate  is Rs. 3/1000  \nMaximum amount for insurance is Rs. 1 lakh");}
	else if ((age>=25&&age<=35)&&(sex=='M')&&(loc=='C')&&(heal=='p')){
		printf(" \nThe Person is insured \n the Premium rate  is Rs. 6/1000  \nMaximum amount for insurance is Rs. 10 thounsands");}
	else{
		printf("The Person is not insured");}
}
	

