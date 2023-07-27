//Write a program which accept string from user and copy small characters of that string into another string.

/*
	Input: "Marvellous Multi OS"

	Output: "arvellous ulti"

*/
#include<stdio.h>
#include<string.h>

void StrCpySmall(char *str, char *dest)
{
	//Filter
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
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

	StrCpySmall(Arr,Brr);

	printf("%s\n",Brr);

	return 0;
}