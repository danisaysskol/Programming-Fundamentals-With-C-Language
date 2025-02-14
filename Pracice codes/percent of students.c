#include <stdio.h>
int main(){
int m, u, e, i, p, total, per;

  printf("Enter the marks obatained in Maths ");
 scanf("%d", &m);
 
  printf("Enter the marks obatained in Urdu ");
 scanf("%d", &u);
 
  printf("Enter the marks obatained in Islamiyah ");
 scanf("%d", &i);
 
  printf("Enter the marks obatained in Pakistan Studies ");
 scanf("%d", &p);
 
  printf("Enter the marks obatained in English");
 scanf("%d", &e);
 
total = m+u+i+p+e;
per= total*100/500;

printf("\nThe Total Marks obtained are %d",total );
printf("\nThe Total Percentage is %d", per);
}
