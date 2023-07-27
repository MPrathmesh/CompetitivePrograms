//2.Write a recursive program which display below pattern.
/*
	Output: 5 4 3 2 1;
*/
#include<stdio.h>

void DisplayR(int iNo)
{
	int i = 1;
	if(i <= iNo)
	{
		printf("%d\n",iNo);
		iNo--;
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