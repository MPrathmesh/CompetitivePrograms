#include<stdio.h>

int SumR(int Arr[], int iSize)
{
	static int iSum = 0;

	if(iSize > 0)
	{
		iSum = iSum + Arr[iSize - 1];
		iSize--;
		SumR(Arr,iSize);
	}
	return iSum;
}

int main()
{
	int Brr[] = {10,20,30,40};
	int iRet = 0;

	iRet = SumR(Brr,4);

	printf("Summation is: %d\n",iRet);

	return 0;
}
    