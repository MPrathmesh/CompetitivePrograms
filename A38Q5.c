//Write a recursive program which accept number from user and return its product of digits.
/*
	Input: 523
	Out:   30
*/
#include<stdio.h>

int MultR(int iNo)
{
	int iDigit = 0;
	static int iMult = 1;

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iMult = iMult * iDigit;
		iNo = iNo / 10;
		MultR(iNo);
	}
	return iMult;
}

int main()
{
	int iValue = 0, iRet = 0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	iRet = MultR(iValue);

	printf("Prduct is %d\n",iRet);
}