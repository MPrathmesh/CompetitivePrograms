//Write a recusrive program which accept string from user and count number of characters.
/*
	Input: Hello
	Output:5
*/
#include<stdio.h>

int StrlenR(char *str)
{
	static int iCount = 0;

	if(*str != '\0')
	{
		iCount++;
		str++;
		StrlenR(str);
	}
	return iCount;
}

int main()
{
	char arr[20];
	int iRet = 0;

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	iRet = StrlenR(arr);

	printf("Small characters are: %d\n",iRet);
	return 0;
}