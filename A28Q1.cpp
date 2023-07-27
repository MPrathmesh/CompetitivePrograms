//Write a program which accept 2 string from user and copy that characters of that string into another string in reverse order.

/*
	Input: "Marvellous Python"

	Output: ""

*/
#include<iostream>
using namespace std;

void StrCpyRev(char *str,char *dest)
{
	while(*str != '\0')
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';

	char *start = str;
	char *end = str;
	char temp;

	while(*end != '\0')
	{
		end++;
	}	
	end--;

	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

int main()
{
	char Arr[30] = "Marvellous Python";
	char Brr[30];
	
	StrCpyRev(Arr,Brr);
	cout<<"String after Reverse: "<<Brr<<endl;

	return 0;
}