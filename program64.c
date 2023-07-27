#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{	
	int iCnt = 0, iEvenCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEvenCnt++;
		}
	}
	return iEvenCnt;
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;
	int iRet = 0;

	printf("Enter number of elemnts\n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter the Values of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet = CountEven(ptr, iSize);
	printf("number of even elements are : %d\n",iRet);

	free(ptr);

	return 0;
}