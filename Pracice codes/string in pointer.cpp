#include <Stdio.h>
int main()
{
	char **p;
	
	char *a;
	p = &a;
	for (int i=0;i <4; i++)
	{
		scanf("%s", (p)+i);
	}
	for (int i=0; i <4; i++)
	{
		printf("%s\n", (p)+i);
	}
	
}