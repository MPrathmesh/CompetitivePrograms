//pattern printing.
//Input: Row = 4	colums = 4
/*
	* * * *
	* * * 
	* *
	*
	* *
	* * *
	* * * *
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j= 0;
	char ch = '\0';
	if(iRow != iCol)
	{
		return;
	}

	for(i = iRow; i >= 1; i--)
	{
		for(j = 1; j <= i; j++)
		{
			{
				printf("*\t");
			}
		}
		printf("\n");
	}

	for(i = 2; i <= iRow; i++)
	{
		for(j = 1; j <= i; j++)
		{
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Please enter number of rows\n");
	scanf("%d",&iValue1);

	printf("Please enter number colums\n");
	scanf("%d",&iValue2);

	Display(iValue1, iValue2);

	return 0;
}