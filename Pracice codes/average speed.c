#include <stdio.h>
int main(){
float t;
printf("Enter the amount of hours car travelled \nNOTE: Time should be between 1-5 \n");
scanf("\n%f", &t);
float d1=20, d2= 31, d3= 42, d4= 15, d5=26;
float as; //as= average speed 
if (t==1);{
as= d1;}

if(t==2){
	as= (d1+d2)/t;}

if(t==3){
	as= (d1+d2+d3)/t;}

if(t==4){
	as= (d1+d2+d3+d4)/t;}

if(t==5){
	as= (d1+d2+d3+d4+d5)/t;}
printf("\nThe Average Speed of the car is %.2f", as);
}




