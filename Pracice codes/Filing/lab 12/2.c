#include <stdio.h>
int main()
{
	char a[26];
	a[0]='A';
	
	for (int i=0; i<26; i++)
		a[i+1]=a[i]+1;
	
	char b[26];
	b[0]='a';
	
	for (int i=0; i<26; i++)
		b[i+1]=b[i]+1;
	
	
	FILE *ptr;
	int count=0, total=0;	
	char arr;
	for (int i=0; i<26;i++)
	{
		ptr=fopen("text.txt","r");
		arr=fgetc(ptr);
		while(!feof(ptr))
		{	
			if (arr==a[i] || arr==b[i])
				count++;
			
			arr=fgetc(ptr);
		}
		printf("%c/%c %d\n",a[i],b[i], count);
		count=0;
		fclose(ptr);	
	}
	
	ptr=fopen("text.txt","r");
	while(!feof(ptr))
	{
		total++;	
		arr=fgetc(ptr);
	}
	fclose(ptr);
	
		printf("\nTOTAL CHARACTERS READ: %d", total);
}	