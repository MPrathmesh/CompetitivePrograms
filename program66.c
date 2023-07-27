#include<stdio.h>
#include<stdlib.h>

//only positive numbers
int Maximum(int Arr[], int iLength)
{
	int iMax = 0, iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
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

	printf("Enter the values\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet = Maximum(ptr,iSize);

	printf("Maximum number is : %d\n",iRet);

	free(ptr);

	return 0;
}