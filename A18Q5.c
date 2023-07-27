//5.Accept number of rows and number of colums from user and display below pattern.
/*
	Input: iRow = 6, iCol = 6
	Output: 1 2 3 4 5
			1 2     5
			1   3   5
			1     4 5
			1 2 3 4 5  
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int	i = 0, j = 0;
	if(iRow != iCol)
	{
		return;
	}
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
			{
				printf("%d\t",j);
			}
			else
			{
				printf(" \t");
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