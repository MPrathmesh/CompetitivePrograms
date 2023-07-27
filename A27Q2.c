//Write a program which accept string from user and copy the contents of that string into another string.

/*
	Input: "marvellous Multi os"
			10

	Output: "marvellous"

	note: If third parameter is greater than the size of source string then copy whole string into destination
*/
#include<stdio.h>

void StrCpyX(char *str, char *dest, int iCnt)
{
	//Filter
	while((*str != '\0') && (iCnt != '\0'))
	{
		*dest = *str;
		str++;
		dest++;
		iCnt--;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30] = "Marvellous Multi os";
	char Brr[30];

	StrCpyX(Arr,Brr,10);

	printf("%s\n",Brr);

	return 0;
}