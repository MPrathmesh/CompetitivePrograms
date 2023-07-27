//Accept chracter from user. If character is capital display all the characters from the input chracters till z.
//If input character is small then print all the characters in reverse order till a. In other cases return directly.
/*
	Input: Q

	Output: Q R S T U V W X Y Z

	Input: m

	Output: m i k j i h g f e d c b a

	Input: 8

	Output: 
*/

#include<stdio.h>

void Display(char ch)
{
	int i = 0;
	if((ch >= 'A')&&(ch <= 'Z'))
	{
		for(i = ch; i < 91; i++)
		{
			printf("%c\n",ch);
			ch++;
		}
	}	
	else if((ch >= 'a')&&(ch <= 'z'))
	{
		for(i = ch; i > 96; i--)
		{
			printf("%c\n",ch);
			ch--;
		}
	}
	else
	{
		return;
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