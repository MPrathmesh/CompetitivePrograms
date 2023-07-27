 //2.Accept number of rows and number of colums from user and display below pattern.
/*
	Input: iRow = 4, iCol = 4
	Output: 2 4 6 8
			1 3 5 7 
			2 4 6 8
			1 3 5 7
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int	i = 0, j = 0;
	for(i = 1; i <= iRow; i++)  //row
	{
		for(j = 1; j <= iCol; j++) //col
		{
			if((i % 2) != 0)
			{
				printf("%d\t",j * 2);
			}
			else
			{
				printf("%d\t",j * 2-1);
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