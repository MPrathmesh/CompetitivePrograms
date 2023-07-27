#include<stdio.h>
//Backtracking
void DisplayR(char *str)
{
	if(*str != '\0')
	{
		DisplayR(str+1); //Head recursion
		printf("%s\n",str);
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