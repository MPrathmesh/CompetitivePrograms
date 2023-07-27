//Accept chracter from user and display its ASCII value in decimal, octal and hexadecimal format.
/*
	Input: A

	Output: Deciaml 65

			Octal 0101

			Hexadecimal 0X41
*/

#include <stdio.h>

void Display(char ch)
{
	if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		printf("Deciaml %d\n",ch);
		printf("Octal 0%o\n",ch);
		printf("Hexadecimal 0x%x\n",ch);
		printf("Hexadecimal 0X%X\n",ch);
	}	
	else
	{
		return;
	}
}

int main()
{
	char cValue = '\0';

	printf("Enter the Character\n");
	scanf("%c",&cValue);

	Display(cValue);

	return 0;
}