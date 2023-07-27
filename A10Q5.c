//5.Accept N numbers from user and return product of all odd elements.
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
	int iMult = 1, iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) != 0)
		{
			iMult = Arr[iCnt] * iMult;
		}
	}
	return iMult;
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

	iRet = Product(p, iSize);

	printf("Product is %d\n",iRet);

	free(p);

	return 0;
}