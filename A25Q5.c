//Write a program which accept string from user and count number of white cpaces
/*
	Input: "marvellous"

	Output: 0	

	Input: "marvellous infosystems by piyush manohar khairnar"

	Output: 5	
*/

#include <stdio.h>

int CountWhiteSp(char *str)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if(*str ==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	iRet = CountWhiteSp(arr);

	printf("%d\n",iRet);

	return 0;
}