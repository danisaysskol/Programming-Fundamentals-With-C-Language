#include<stdio.h>
int main()
{
	struct student{
		int id;
		char name[20];
		char sex;
		int quiz[2];
		int mid;
		int final;
		int total;
	};
	
	struct student data;
	FILE *ptr;
	
	for (int i=0; i<1; i++)
	{
		ptr=fopen("data3.txt","a+");
		printf("Enter the ID, NAME, SEX, QUIZ1 SCORE, QUIZ2 SCORE, MID, FINAL, TOTAL ");
		scanf("%d %s %c %d %d %d %d %d", &data.id, data.name, &data.sex, &data.quiz[1],&data.quiz[2],&data.mid, &data.final, &data.total);
		fprintf(ptr,"%d %s %c %d %d %d %d %d\n", data.id, data.name, data.sex, data.quiz[1],data.quiz[2],data.mid, data.final, data.total);
		
		fclose(ptr);
	}
	
	
	
}