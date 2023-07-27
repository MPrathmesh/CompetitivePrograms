 //5.Accept number of rows and number of colums from user and display below pattern.
/*
	Input: iRow = 4, iCol = 4
	Output: 1 2 3 4
			2 3 4 5
			3 4 5 6
			4 5 6 7
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int	i = 0, j = 1;
	int iNo = 0;
	for(i = 1; i <= iRow; i++)  //row
	{
		for(j = iNo; j <= iCol; j++) //col
		{
			printf("%d\t",j);
		}
		iNo++;
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