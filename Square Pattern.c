#include<stdio.h>
int main()
{
	int i,j;/*initilize i,j*/
	printf("Square Pattern\n\n");/*rfer a name of pattern to be printed*/
	for(i=1;i<=5;i++)/*initilize i for loop*/
	{
		for(j=1;j<=5;j++)/*if i for lop is true,initilize j for loop*/
		{
			printf(" * ");/*if j for loop is true*/
		}
		printf("\n");/*if j for loop gets false*/
	}
}
