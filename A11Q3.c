//3.Accept N numbers from user and return the difference between largest and smallest number.
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int iCnt = 0;
	int iMax = Arr[0];
	int iMin = Arr[0];
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
		else if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt] ;
		}
	}
	return iMax - iMin;
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

	printf("Enter the number of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet = Difference(p, iSize);

	printf("Difference is %d\n",iRet);

	free(p);

	return 0;
}