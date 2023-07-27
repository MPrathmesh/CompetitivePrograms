//3.Accept N numbers from user check whether that number contains 11 in it or not.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL Check(int Arr[], int iLength)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			return TRUE;
		}
	}
}

int main()
{
	int iSize = 0, iCnt = 0;
	int *p = NULL;
	BOOL bRet = FALSE;

	printf("Enter number of elements\n");
	scanf("%d",&iSize);

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

	bRet = Check(p, iSize);

	if(bRet == TRUE)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is not present\n");
	}
	free(p);

	return 0;
}