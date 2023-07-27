//2.Write a recursive program which display below pattern.
/*
	Output: A B C D E F;
*/
#include<stdio.h>

void DisplayR(int iNo)
{
	static int i = 0;

	if(i < iNo)
	{
		printf("%c\t",'A' + i);
		i++;
		DisplayR(iNo);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter Value\n");
	scanf("%d",&iValue);

	DisplayR(iValue);

	return 0;
}