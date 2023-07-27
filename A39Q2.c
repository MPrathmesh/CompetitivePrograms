//Write a recursive program which accepts number from user and return largest digit.
/*
	Input: 87983
	Output: 9
*/
#include<stdio.h>

int MaxR(int iNo)
{
	int iDigit = 0;
	int iLargest = 0;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iLargest < iDigit)
		{
			iLargest = iDigit;
		}
		iNo = iNo / 10;
	}
	return iLargest;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = MaxR(iValue);

	printf("Maximum digit is %d\n",iRet);

	return 0;
}