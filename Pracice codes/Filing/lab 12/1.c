#include <stdio.h>
int main()
{
	FILE *ptr;
	char txt1[100]; //text1 which will we write
	printf("Please enter the first text ");
	scanf(" %[^\n]", txt1);
	
	char txt2[100]; //text2 which will we write
	printf("Please enter the second text ");
	scanf(" %[^\n]", txt2);	

	ptr= fopen("text.txt", "w"); //file pointer
	
	fprintf(ptr,"%s", txt1); 
	fclose(ptr); //closing the pointer is necessary 
	
	ptr=fopen("text2.txt", "w"); 
	fprintf(ptr, "%s",txt2);
	
	char s1[100], s2[100];
	fclose (ptr);
	
	FILE *p2; //another pointer
	p2=fopen("text.txt", "r" );	
	
	while (!feof(p2))
	{
		fscanf(p2, "%[^\n]", s1);
		printf("%s", s1);
	}
	
	fclose(p2);
	
	p2=fopen("text2.txt", "r");
	
	while(!feof(p2))
	{
		fscanf(p2, "%[^\n]", s2);
		printf("%s", s2);
	}
	fclose (p2);
	
	p2=fopen("merge.txt", "w"); //third file in which we'll store both texts
	
	fprintf(p2, "%s", s1);
	fprintf(p2, "%s", s2);
	fclose (p2);
}