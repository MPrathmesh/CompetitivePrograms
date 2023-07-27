//3.Accept Character from user and check whether it is digit or not(A-Z).
/*
	Input: 7
	Output: TRUE

	Input: d
	Output: FALSE
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	if((ch >= '0' && ch <= '9'))
	{
		return TRUE;
	}	
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the digit\n");
	scanf("%c",&cValue);

	bRet = ChkDigit(cValue);

	if(bRet == TRUE)
	{
		printf("It is digit\n");
	}
	else
	{
		printf("It is not digit\n");
	}

	return 0;
}