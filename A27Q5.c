//Write a program which accept 2 string from user and concat second string after first string.(Implement strcat() function).

/*
	Input: "Marvellous Infosystems"
			"Logic Building"

	Output: "Marvellous Infosystems Logic Building"

*/
#include<stdio.h>
#include<string.h>

void StrCatX(char *src, char *dest)
{
	while(*src != '\0')
	{
		src++;
	}
	while(*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	*src = '\0';
}

int main()
{
	char Arr[30] = "Marvellous Infosystems";
	char Brr[30] = " Logic Building";

	StrCatX(Arr,Brr);

	printf("%s\n",Arr);

	return 0;
}