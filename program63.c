#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{	
	int iCnt = 0;
	printf("Even elments are : \n");
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize = 0;
	int *ptr = NULL;
	int iCnt = 0;

	printf("Enter number of elemnts\n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter the Values of array\n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	DisplayEven(ptr, iSize);

	free(ptr);

	return 0;
}