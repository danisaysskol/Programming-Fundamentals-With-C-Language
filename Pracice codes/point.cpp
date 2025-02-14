#include <stdio.h>
#include <stdlib.h>
#include <cstring>
int main()
{
	char *a = (char *) calloc(2, sizeof(char));
	scanf("%s", a);
	
	for (int i=0 ;i<strlen(a); i++)
	{
		printf("%c", *(a+i));
	}

	int count =0;
	int flag;
	do 
	{
		count=0;
		int flag=0;
		for (int i=0; i<strlen(a); i++)
		{
			if (*(a+i)==*(a+i+1))	
				{
					i++;
					continue;
					flag=1;		
				}		
			else 
				{
					char temp= *(a+i);
					*(a+count)=temp;
					count++;
				}
		}
		a= (char *)realloc(a, count*sizeof(char));	
	}
	while (flag);
	
	printf("\n%d\n", strlen(a));
		
	if (*(a)==*(a+1) && count==2)
		printf("");
	else
	{
		for (int i=0 ; i<count; i++)
		printf("%c", *(a+i));	
	}
	
	

}