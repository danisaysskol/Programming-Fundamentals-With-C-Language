#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int sum[t];
    int n, i;
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        sum[a0]=0;
        for (i= 1; i<n; i++)
        {
            if (i%3==0 || i%5==0)
               sum[a0]= sum[a0]+i;
        }
        printf("%d\n", sum[a0]);
    }
    return 0;
}
