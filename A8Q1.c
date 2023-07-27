//1.Accept N numbers from user and return difference between summation of even lements and summation of odd elements
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int iCnt = 0;
	int iSum1 = 0;
	int iSum2 = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iSum1 = iSum1 + Arr[iCnt];
		}
		else
		{
			iSum2 = iSum2 + Arr[iCnt];
		}
		
	}
	return iSum1 - iSum2;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0;
	int *p = NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	p = (int *)malloc(iSize * sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}

	printf("Enter the values of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet = Difference(p, iSize);

	printf("Result is %d\n",iRet);

	free(p);

	return 0;
}