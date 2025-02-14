#include <stdio.h>
#include <string.h>
int main()
{
	char a[5][8];
	printf("Enter the name ");
	
	for (int i=0; i<5; i++)
	{
		scanf(" %s", &a[i][0]);
	}

	int l[5], index=0, x[0][8], num=0;
	
	printf("Which number you want to search?");
	scanf("%s", x);


	for (int i=0; i<5; i++)
	{
		for (int j=0; j<strlen(x); j++)
		{
			if (a[i][j]==x[0][j])
			{
				num++;
				if (num==strlen(x))
				{
					l[index]=i;
					index++;
//				}
			}
		}
		num=0;
	}
	printf("\n%d", num);
	if (num)
	{
		printf("The string is present");
	}
}



}