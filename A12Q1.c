//1.Accept number from user and display below patterns
//Input : 5
//Output : A B C D E

#include<stdio.h>

void Pattern(int iNo)
{
	int i = 0;
	char ch = '\0';

	for(i = 0,ch = 'A'; i < iNo; i++,ch++)
	{
		printf("%c\t",ch);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the number of elements\n");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0;
}