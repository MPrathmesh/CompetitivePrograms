//Write a recusrive program which accept string from user ad count white spaces.
/*
	Input: HE llo WOr lD
	Output: 3
*/
#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt = 0;

	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;

	printf("Enter String\n");
	scanf("%[^'\n']s",arr);

	iRet = WhiteSpace(arr);

	printf("Count of WhiteSpaces is: %d\n",iRet);

	return 0;
}