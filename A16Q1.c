 //1.Accept number of rows and number of colums from user and display below pattern.
/*
	Input: iRow = 4, iCol = 4
	Output: * # # #
			* * # #
			* * * #
			* * * *
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int	i = 0, j = 0;
	for(i = 1; i <= iRow; i++)  //row
	{
		for(j = 1; j <= iCol; j++) //col
		{
			if(j > i)
			{
				printf("#\t");
			}
			else
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

	Pattern(iValue1, iValue2);

	return 0;
}