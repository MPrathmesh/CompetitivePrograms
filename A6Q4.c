//4.Write a program which accept number from user and count frequency of 4 in it.
#include<stdio.h>

int CountFour(int iNo)
{
	int iCnt = 0;
	int iFrequency = 0;
	int iDigit = 0;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 4)
		{
			iFrequency++;
		}
		iNo = iNo / 10;
	}
	return iFrequency;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = CountFour(iValue);
	printf("%d\n",iRet);

	return 0;
}