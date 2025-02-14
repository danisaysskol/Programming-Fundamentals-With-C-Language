#include<stdio.h>


int main()
{
    char m; char t[3]={'\0'};  int x = 0;
   float f[10]; int coef_int[10];
    int coef[10], i, n, d[10];
  char s1[3] = { "sin" } ,s2[3]={"cos"}, s3[3] = { "sec" }, s4[3] = { "tan" }, s5[3] = { "cot" }, s6[5] = {"cosec" };
    int l; int pow[10];float powi[10];
    
    printf("ENTER 1 FOR DIFFERENTIAITON\n AND 2 FOR INTEGRATION\n:");
    scanf("%d", &l);
    switch (l)
    {
    case 1:
  
            printf("Enter the order of the polynomial\n");
            scanf("%d", &n); 
		
			//TAKING POWERS
            for (i = n; i > 0; i--)
            {
                printf("Enter the power of %dth element:", i);
                scanf("%d", &pow[i]);
                //STORING ELEMENT IN POWER ARRAY
            }
            //taking coefficient
            for (i = n; i > 0; i--)
            {
                printf("Enter the co-efficient of x^%d:", pow[i]);
                scanf("%d", &coef[i]);
                //storing elements in coef array

            }
            printf("Given polynomial is\n");
            for (i = n; i > 0; i--)
            {

                if (coef[i] > 0)
                {
                    if (i != n)
                        printf(" + ");
                }
                else if (coef[i] < 0)
                    printf("  ");
                
                printf("%dx^%d", coef[i], pow[i]);
            }
            //To find derivative
            for (i = n; i > 0; i--)
                d[i] = coef[i] * pow[i];
            printf("\n Derivative of the given polynomial is\n");
            for (i = n; i > 0; i--)
            {


                if (d[i] > 0)
                    {if (i != n)
					printf(" + ");
					}
			  //IF IT IS -VE SO PRINT AS IT IS WITHOUT SIGN
               else if (d[i] < 0)
                    printf(" ");
                printf("%dx^%d", d[i], pow[i] - 1);
            }
                        
        
                 
            
            
        
       break;                        ///int///    
   case 2:
        
       printf("Enter the order of the polynomial:");
        scanf("%d", &n); 
        for (i = n; i >0; i--)
        {
            printf("Enter the power of %dth element:", i);
            scanf("%f", &powi[i]);
        }
        for (i = n; i > 0; i--)
        {
            printf("Enter the co-efficient of power %.2f:", powi[i]);
            scanf("%d", &coef_int[i]);
        }printf("Given polynomial is\n");
        for (i = n; i > 0; i--)
        {
            if (coef_int[i] > 0 )
            {
                if (i != n)
                    printf(" + ");
            }
            else if (coef_int[i] < 0)
                printf("  ");
            else
                printf(" + ");
            printf("%dx^%.f ",coef_int[i], powi[i]);
        }
        printf("dx");
        //integration process:
        for (i = n; i >0; i--)
        {
            f[i] = coef_int[i] / (powi[i]+1);
        }
            printf("\n Integeral of the given polynomial is\n");
            for (i = n; i > 0; i--)
            {


                if (f[i] > 0)
                    printf(" + ");
                else if (f[i] < 0)
                    printf(" ");
                else
                    printf("+");
                printf("%.1fx^%.1f", f[i], powi[i] + 1);
            }
            printf("+c");
        
        break;
        
    }
    return 0;
}