//Write a program which accept string from user and copy capital characters of that string into another string.

/*
	Input: "Marvellous Multi OS"

	Output: "MMOS"

*/
#include<stdio.h>
#include<string.h>

void StrCpyCap(char *str, char *dest)
{
	//Filter
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*dest = *str;
			dest++;
		}
		str++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[30] = "Marvellous Multi OS";
	char Brr[30];

	StrCpyCap(Arr,Brr);

	printf("%s\n",Brr);

	return 0;
}