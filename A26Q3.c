//Write a program which accept string from user and accept one character.Return frequency of that character.
/*
	Input: "marvellous Multi os"
			M

	Output: 0	

	Input: "marvellous multi os"
			W

	Output: -1	

	Input: "marvellous multi os"
			e

	Output: 4	
*/

#include <stdio.h>

int FirstChar(char *str, char ch)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str == ch))
		{
		 	iCnt++;
		 	return iCnt; 	
		}
		str++;
	}
}

int main()
{
	char arr[20];
	char cValue;
	int iRet = 0;

	printf("Enter string\n");
	scanf(" %[^'\n']s",arr);

	printf("Enter character\n");
	scanf(" %c",&cValue);

	iRet = FirstChar(arr,cValue);

	printf("character location is %d\n",iRet);

	return 0;
}