//5.Accept N numbers from user and accept one another number as no, return frequency of NO form it.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
	int iCnt = 0, iFrequency = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
	int *p = NULL;

	printf("Enter the number of elements\n");
	scanf("%d",&iSize);

	printf("Enter the number that you want check frequency of number\n");
	scanf("%d",&iValue);

	p = (int *)malloc(iSize * sizeof(int));

	if(p == NULL)
	{
			return -1;
	}

	printf("Enter the number of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet = Frequency(p, iSize, iValue);

	printf("%d\n",iRet);
	free(p);

	return 0;
}