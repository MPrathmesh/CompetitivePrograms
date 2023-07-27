#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;

	for(iCnt = iLength-1; iCnt >= 0; iCnt--)
	{
		if(iNo == Arr[iCnt])
		{
			break;
		}
	}
	return iCnt;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;
	int iValue = 0;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter the values\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	printf("Enter the element to Search\n");
	scanf("%d",&iValue);

	iRet = SearchLastOccurance(ptr,iSize,iValue);
	if(iRet == -1)
	{
		printf("There is no such element in array\n");
	}
	else
	{
		printf("Element first occured at : %d\n",iRet);
	}

	free(ptr);

	return 0;
}