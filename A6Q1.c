//1.Write a program which accept number from user and display its digits in reverse order
#include<stdio.h>

void DisplayDigit(int iNo)
{
	int iDigit = 0;
	int iRev = 0; 
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
	}
	printf("Reverse number is %d\n",iRev);
}

int main()
{
	int iValue = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	DisplayDigit(iValue);

	return 0;
}