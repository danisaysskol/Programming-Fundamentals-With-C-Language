#include <stdio.h>
int main(){
	int len;
	printf("Enter the length of the array");
	scanf("%d", &len);
	 char a[len];
 	printf("Enter the character "); 
 for (int i=0; i<len; i++)
  {
 	scanf(" %c", &a[i]);
  }
	char x;
	printf("\nWhich character you want to find?");
	scanf(" %c", &x);
	int num=0;
	int i=0;
	int j[8];
	int index=0;
	while(i<len)
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
			printf("\nThe character is present in the array at postions ");
			for (i=0; i<index; i++)
			{
				printf("%d ", j[i]);
		}			
		}
		else 
		printf("\nThe character is not present in the array");
}