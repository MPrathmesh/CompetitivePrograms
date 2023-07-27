//1.Write a program which accept number form user and display below pattern.
/*
	Input: 5
	Output: 5 * 4 * 3 * 2 * 1 *
*/
#include<stdio.h>

void DisplayR(int iNo)
{
	int i = 1;
	if(i <= iNo)
	{
		printf("%d\t*\t",iNo);
		iNo--;
		DisplayR(iNo);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	DisplayR(iValue);

	return 0;
}