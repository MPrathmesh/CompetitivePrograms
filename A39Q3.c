//Write a recusrive program which accept string from user and count number of small characters
/*
	Input: HElloWOrlD
	Output: 5 
*/
#include<stdio.h>

int SmallR(char *str)
{
	static int ch = 0;
	if(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			ch++;
		}
		str++;
		SmallR(str);
	}
	return ch;
}

int main()
{
	char arr[20];
	int iRet = 0;

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	iRet = SmallR(arr);

	printf("Small characters is: %d\n",iRet);
}