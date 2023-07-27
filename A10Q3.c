//3.Accept N numbers from user and accept one another number as NO, return index of last occurance of that NO.
#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	for(iCnt = iLength-1; iCnt >= 0; iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	return iCnt;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
	int *p = NULL;

	printf("Enter the number of elemensts\n");
	scanf("%d",&iSize);

	printf("Enter the number\n");
	scanf("%d",&iValue);

	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}

	printf("Enter the number of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet = LastOcc(p, iSize, iValue);

	if(iRet == -1)
	{
		printf("There is no such number\n");
	}
	else
	{
		printf("First occurence of number is %d\n",iRet);
	}

	free(p);

	return 0;
}