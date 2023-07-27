//1.Accept N numbers from user and return frequency of even numbers.
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int iCnt = 0, iFrequency = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *p =NULL;

	printf("Enter the elements\n");
	scanf("%d",&iSize);

	p = (int *)malloc(iSize * sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}

	printf("Enter the numbers of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet = CountEven(p, iSize);

	printf("Result is %d\n",iRet);

	free(p);

	return 0;
}