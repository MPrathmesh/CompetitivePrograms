//Write a program which accept string from user and check whether it contains vowels in it or not.
/*
	Input: "marvellous"

	Output: TRUE

	Input: "Demo"

	Output: TRUE

	Input: "xyz"

	Output: false
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char str[])
{
	while(*str != '\0')
	{
		if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
		{
			return TRUE;
		}	
		else
		{
			return FALSE;
		}
		str++;
	}
}

int main()
{
	char arr[20];
	BOOL bRet = FALSE;

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	bRet = ChkVowel(arr);

	if(bRet == TRUE)
	{
		printf("Contains vowels\n");
	}
	else
	{
		printf("There is no vowel\n");
	}

	return 0;
}