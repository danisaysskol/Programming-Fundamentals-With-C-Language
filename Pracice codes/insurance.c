#include <stdio.h>
int main(){
	int age;
	char sex, loc, heal;
	
	printf("Enter your age please");
	scanf("\n%d", &age);
	
	printf("Enter your sex please? \n (M= Male F= Female) ");
	scanf("\n%c", &sex);	
	
	printf("Enter your location please\n (C= city V= Village) ");
	scanf("\n%c", &loc);
 	
	printf("Enter your health condition please? \n (E= Excellent P= Poor)");
	scanf("\n%c", &heal); 
  	
	if ((age>=25&&age<=35)&&(sex=='M'||sex=='m')&&(loc=='c'||loc=='C')&&(heal=='e'||heal=='E')){		  
		printf(" \nThe Person is insured \nHence the Premium rate  is Rs. 4/1000  \nMaximum amount for insurance is Rs. 2 lakhs");
	}
	else if ((age>=25&&age<=35)&&(sex=='F'||sex=='f')&&(loc=='C'||loc=='c')&&(heal=='e'||heal=='E')){		 
		printf(" \nThe Person is insured \nHence the Premium rate  is Rs. 3/1000  \nMaximum amount for insurance is Rs. 1 lakh");
	}
	else if ((age>=25&&age<=35)&&(sex=='M'||sex=='m')&&(loc=='c'||loc=='C')&&(heal=='p'||heal=='P')){
		printf(" \nThe Person is insured \nHence the Premium rate  is Rs. 6/1000  \nMaximum amount for insurance is Rs. 10 thounsands");
	}
	else{
		printf("The Person is not insured");
	}
}
	

