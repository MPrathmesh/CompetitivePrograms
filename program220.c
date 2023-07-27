#include<stdio.h>

int CountSmallR(char *str)
{
	static int iCount = 0;

	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCount++;
		}
		str++;
		CountSmallR(str);
	}
	return iCount;
}

int main()
{
	char arr[20];
	int iRet = 0;

	printf("Enter string\n");
	scanf("%[^'\n']s",arr);

	iRet = CountSmallR(arr);

	printf("Small characters are: %d\n",iRet);
	return 0;
}