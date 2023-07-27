//pattern printing.
//Input: Row = 4	colums = 4
/*
	* * * *
	* * * *
	* * * *
	* * * *
*/   
#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
	//   1        2        3
	for(i = 1; i <= iRow; i++)	//Outer
		//           4
	{	//    1      2         3
		for(j = 1; j <= iCol; j++)	//inner
		{	
			printf("*\t");	//4
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