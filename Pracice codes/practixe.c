#include <stdio.h>
//program to find the table
int main(void){
    
    int a;
    int i=0;
    
        printf("enter you terms ");
        scanf("%d", &a);
    int c=a;
    int d=1;
    for(i=1; i<=10; i++){
    	
  			for(int b=1; b<=a; b++){
    	     printf("%d X %d is=%d ",d, i, i*d );
    	     d=d+1;        
    }
    printf("\n");
    d=1;
}
    
}

