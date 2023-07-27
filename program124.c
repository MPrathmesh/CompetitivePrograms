#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iLength)
{
	int	iCnt = 0;
	int iSum = 0;
	printf("number of array is:\n");
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter the values of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet = Summation(ptr, iSize);

	printf("Addition is: %d\n",iRet);

	return 0;
}