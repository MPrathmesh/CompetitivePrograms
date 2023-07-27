//4.Accept N numbers from user and return frequency of 11 form it
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0, iFrequency = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			iFrequency++;
		}
	} 
	return iFrequency;
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

	iRet = Frequency(p, iSize);

	printf("%d\n",iRet);
	free(p);

	return 0;
}