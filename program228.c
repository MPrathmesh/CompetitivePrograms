#include<stdio.h>

void DisplayR(int iNo)
{
	static int i = 0;

	if(i < iNo)
	{
		i++;
		DisplayR(iNo);
		printf("%c\t",'a'+ i);
	}
}

int main()
{
	int iValue = 0;

	printf("Entter the number\n");
	scanf("%d",&iValue);

	DisplayR(iValue);

	return 0;
}