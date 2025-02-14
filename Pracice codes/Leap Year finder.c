#include <stdio.h>
int main( )
{
 int a;
 printf("Enter the year ");
 scanf("%d", &a);
 a= (a%4);
 
 (!(a&&1))? printf("The year is leap"): a||0? printf("The year is not leap"): printf("");
}



