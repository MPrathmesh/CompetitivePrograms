//2.Accept number of rows and number of colums from user and display below pattern.
/*
	Input: iRow = 4, iCol = 4
	Output: A B C D
			a b c d
			A B C D
			a b c d
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int	i = 0, j = 0;
	char ch1 = '\0';
	char ch2 = '\0';
	if(iRow != iCol)
	{
		return;
	}
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1,ch1 = 'a',ch2='A'; j <= iCol; j++,ch1++,ch2++)
		{
			if((i == 1) || (i == 3))
			{
				printf("%c\t",ch2);
			}
			else
			{
				printf("%c\t",ch1);
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