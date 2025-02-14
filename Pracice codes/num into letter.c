#include <stdio.h>
int main()
{
	int num, mod, len, i=0;
	
	printf("Enter the number ");
	scanf("%d", &num);
	
	int num2= num;
	
	while(1)
	{	
		num2=num2/10; 
		i++;
		if(num2==0)
		break;
	}
	
	int rev[i];
	int loop1=0;
	while (num>0)
	{
		
		rev[loop1]=num%10;
		num=num/10;
		loop1++;
		 
	}
	
	i--;
	while(i>=0)
	{
		switch (rev[i])
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
			    break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
			    printf("Nine ");
				break;
			
		}
		i--;				
}		
}


	
