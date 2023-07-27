//5.Accept N numbers from user and display summation of digits of each number.
#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
	int iCnt = 0, iDigit = 0, iSum = 0;
	int iNo = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iNo = Arr[iCnt];
		iSum = 0;
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			iSum = iDigit + iSum;
			iNo = iNo / 10;
		}
		printf("Sum of each digits is %d\n",iSum);	
	}
}

int main()
{
	int iSize = 0, iCnt = 0;
	int *p = NULL;

	printf("Enter number of elements\n");
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

	DigitsSum(p, iSize);

	free(p);

	return 0;
}