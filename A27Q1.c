//Write a program which accept string from user and copy the contents of that string into another string.

/*
	Input: "marvellous Multi os"

	Output: "marvellous Multi os"
*/
#include<stdio.h>

void StrCpyX(char *str, char *dest)
{
	//Filter
	while(*str != '\0')
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30] = "Marvellous Multi os";
	char Brr[30];

	StrCpyX(Arr,Brr);

	printf("%s\n",Brr);

	return 0;
}