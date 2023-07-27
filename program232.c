#include<stdio.h>

void DisplayR(char *str)
{
	if(*str != '\0')
	{
		printf("%c\n",*str);
		DisplayR(++str);	
	}
	
}

int main()
{
	char Arr[20];

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);

	DisplayR(Arr);

	return 0;
}