 //3.Accept number of rows and number of colums from user and display below pattern.
/*
	Input: iRow = 5, iCol = 5
	Output: a b c d e
			1 2 3 4 5
			a b c d u
			1 2 3 4 5
			a b c d e
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int	i = 0, j = 0,ch = '\0';
	for(i = 1; i <= iRow; i++)  //row
	{
		for(j = 1, ch = 'a'; j <= iCol; j++,ch++) //col
		{
			if((i % 2) != 0)
			{
				printf("%c\t",ch);
			}
			else
			{
				printf("%d\t",j);
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