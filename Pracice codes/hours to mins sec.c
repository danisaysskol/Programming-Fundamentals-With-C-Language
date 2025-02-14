#include <stdio.h>
int main(){
	int h, min, sec;
	printf("Enter the hours ");
	scanf("%d",&h);
	min= h*60;
	sec= min*60;
	printf("The total number of minutes are %d min ", min);
	printf("\nThe total number of seconds are %d s\n", sec);
	
	int y, week, day;
	printf("\nEnter the number of years ");
	scanf("%d",&y);
	week= y*52;
	day= week*7;
	printf("The total number of weeks are %d", week);
	printf("\nThe total number of days are %d", day);
}
