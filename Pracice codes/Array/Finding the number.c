#include <stdio.h>
int main(){
 int a[8];
 	printf("Enter the numbers "); 
 for (int i=0; i<8; i++)
  {
 	scanf("%d", &a[i]);
  }
	int x;
	printf("\nWhich number you want to find?");
	scanf("%d", &x);
	int num=0;
	int i=0;
	int j[8];
	int index=0;
	while(i<8)
	{
		if (a[i]==x)
		{
			num++;
			j[index]=i;
			index++;
		}
	i++;
		
	}
		if (num)
		{
			printf("\nThe number is present in the array at postions ");
			for (i=0; i<index; i++)
			{
				printf("%d ", j[i]);
										}			
		}
		else 
		printf("\nThe number is not present in the array");


}