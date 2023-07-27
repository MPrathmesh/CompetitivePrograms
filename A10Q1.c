//1.Accept N numbers from user and accept one another number as NO, acheck whether NO is present or not.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 0
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			return TRUE;
		}
	}
}

int main()
{
	int iSize = 0, iCnt = 0, iValue = 0;
	int *p = NULL;
	BOOL bRet = FALSE;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	printf("Enter number that you want to search\n");
	scanf("%d",&iValue);

	p = (int *)malloc(iSize * sizeof(int));

	if(p == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}

	printf("Enter numbers of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	bRet = Check(p, iSize, iValue);

	if(bRet == TRUE)
	{
		printf("Number is present\n");
	}
	else
	{
		printf("Number is not present\n");
	}

	free(p);

	return 0;
}