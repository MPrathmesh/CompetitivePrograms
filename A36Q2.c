//2.Write a recursive program which display below pattern.
/*
	Output: 1 2 3 4 5;
*/
#include<stdio.h>

void DisplayR(int iNo)
{
	static int i = 1;
	if(i <= iNo)
	{
		printf("%d\n",i);
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