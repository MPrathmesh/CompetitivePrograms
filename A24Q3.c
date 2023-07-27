//Write a program which accept string from user and return difference betwwen frequency of small chracters and frequency of capital chracters.
/*
	Input: "MarvellouS"

	Output: 6 (8-2)
*/

#include <stdio.h>

int CountSmall(char *str)
{
	int iCnt = 0;
	int iCnt2 = 0;

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		else if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt2++;
		}
		str++;
	}
	return iCnt2 - iCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	iRet = CountSmall(arr);

	printf("%d\n",iRet);

	return 0;
}