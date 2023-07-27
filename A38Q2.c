//2.Write a recursive program which accept number from user and return summation of its digits.
/*
	Input: 879
	Output: 24
*/
#include<stdio.h>

int SumR(int iNo)
{
	int iDigit = 0;
	static int iSum = 0;
	
	if(iNo > 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		SumR(iNo);
	}
	return iSum;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = SumR(iValue);

	printf("Summation of digits: %d\n",iRet);

	return 0;
}