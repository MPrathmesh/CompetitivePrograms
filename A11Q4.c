//4.Accept N numbers from user and display all such numbers which contains 3 digits in it.
#include<stdio.h>
#include<stdlib.h>

int Digits(int Arr[], int iLength)
{
	int iCnt = 0, iCnt2 = 0;
	int iNo = 0;
	int iDigit = 0;

	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iNo = Arr[iCnt];
		iCnt2 = 0;
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			iCnt2++;
			iNo = iNo / 10;
		}
		if(iCnt2 == 3)
		{
			printf("%d\n",Arr[iCnt]);
		}
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

	printf("Enter the number of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	Digits(p, iSize);

	free(p);

	return 0;
}