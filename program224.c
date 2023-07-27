#include<stdio.h>

void Display(int iNo)
{
	int i = 0;
	char ch = 'a';

	while(i < iNo)
	{
		printf("%c\n",ch);
		ch++;
		i++;
	}
}

int main()
{
	int iValue = 0;

	printf("Entter the number\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}