//Accept chracter from user. If character is capital display its corresponding small character,
//and if it small then display its corresponding capital.In other cases display as it is.
/*
	Input: Q

	Output: q

	Input: m

	Output: M

	Input: 4

	Output: 4

	Input: %

	Output: %
*/

#include<stdio.h>

void Display(char ch)
{
	if((ch >= 'A')&&(ch <= 'Z'))
	{
		ch = ch + 32;
		printf("%c",ch);
	}	
	else if((ch >= 'a')&&(ch <= 'z'))
	{
		ch = ch - 32;
		printf("%c",ch);
	}
	else
	{
		printf("%c",ch);
	}
}

int main()
{
	char cValue = '\0';

	printf("Enter the character\n");
	scanf("%c",&cValue);

	Display(cValue);

	return 0;
}