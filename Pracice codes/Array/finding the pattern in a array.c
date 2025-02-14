#include <stdio.h>
#include <string.h>
int main(){

	char txt[100];
	char p[100];
	
	printf("Enter the String ");
	gets(txt);
	int m= strlen(txt);
	
	printf("Enter the txt you want to search ");
	gets(p);
	int n = strlen(p);
	int same=0; 
	
	for (int i=0; i<m-n; i++)
	{	int j;
		for ( j=0; j<n; j++)
		{
			if (txt[i+j]!=p[j])
				break;
		}	
		if(j==n)
		same++;
	}
	printf("%d", same);
	
}