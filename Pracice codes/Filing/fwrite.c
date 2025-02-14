//#include<stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//int main()
//{
//	struct emp {
//		char name[30];
//		int age;
//		int salary;
//	};
//	char choice='Y';
//	struct emp a;
//	FILE *ptr;
//	ptr= fopen("write.txt", "wb");
//	if (ptr==NULL)
//	{
//		printf("Error!!");
////		exit(0);
//	}
//	else 
//	{
//		do{
//			printf("%d\n", sizeof(struct emp));
//			printf("Enter the name, age and salary ");
//			scanf("%s", a.name);
//			scanf("%d", &a.age);
//			scanf("%d", &a.salary );
//			fwrite(&a, sizeof(a), 1, ptr);
//			printf("Do you want to continue ");
//			fflush(stdin);
//			choice=getche();
//		  }
//		  while(choice=='Y');
//	}
//	fclose(ptr);
//}
#include "stdio.h"
main( )
{
 FILE *fp ;
 struct emp
 {
 char name[40] ;
 int age ;
 float bs ;
 } ;
 struct emp e ;
 fp = fopen ( "EMP.dat", "rb" ) ;
 if ( fp == NULL )
 {
 puts ( "Cannot open file" ) ;
 exit( 1) ;
 }
 while ( fread ( &e, sizeof ( e ), 1, fp ) == 1 )
 printf ( "\n%s %d %f", e.name, e.age, e.bs ) ;
 fclose ( fp ) ;
} 


