#include <stdio.h>
//progrram to sort the array
void sortfunc(int *arr, int *size, int a)
{
	int temp;
	
	if (a==1)
	{
		for (int i=0; i<*(size); i++)
		{
			for (int j=0; j<*(size)-1; j++)
			{
				if(*(arr+j)>*(arr+j+1))
				{
					temp=*(arr+j);
					*(arr+j)=*(arr+j+1);
					*(arr+j+1)=temp;
				}
			}
		}
	}
	
	if (a==2)
	{
		for (int i=0; i<*(size); i++)
		{
			for (int j=0; j<*(size)-1; j++)
			{
				if (*(arr+j)<*(arr+j+1))
				{
					temp=*(arr+j);
					*(arr+j)=*(arr+j+1);
					*(arr+j+1)=temp;
				}
			}
		}
	}
	
	printf("The order is: ");
	for (int i=0 ; i< *(size); i++)
	{
		printf("%d ", *(arr++));
	}
	
}

int main()
{	
	int size;
	printf("Enter the size of array ");
	scanf("%d", &size);
	
	int a[size];
	int i;
	
	printf("Enter the numbers: ");
	for (i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	int order;
	printf("Enter the order you want, 1 for ascending and 2 for descending ");
	scanf("%d", &order);
	
	sortfunc(a, &size, order);
}
