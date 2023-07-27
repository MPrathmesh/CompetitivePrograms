//2.Accept N numbers from user and return difference between frequency of even number and odd numbers.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0;
	int iFrequency1 = 0, iFrequency2 = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iFrequency1++;
		}
		else
		{
			iFrequency2++;
		}
	}
	return iFrequency1 - iFrequency2;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *p = NULL;

	printf("Enter the elements :\n");
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

	iRet = Frequency(p, iSize);

	printf("Difference is %d\n",iRet);

	free(p);

	return 0;
}