//Write a recursive program which accepts number from user and return smallest digit.
/*
	Input: 87983
	Output: 3
*/
#include<stdio.h>

int MinR(int iNo)
{
	int iDigit = 0;
	int iSmallest;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iSmallest > iDigit)
		{
			iSmallest = iDigit;
		}
		iNo = iNo / 10;
	}
	return iSmallest;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = MinR(iValue);

	printf("Smallest digit is %d\n",iRet);

	return 0;
}