#include<stdio.h>
int main()
{
	int i,j;
	printf("Parallelogram pattern\n\n");
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j>=i&&j<=5+i)
			printf("*");
			else
			printf(" ");
			
		}
		printf("\n");
	}
}
