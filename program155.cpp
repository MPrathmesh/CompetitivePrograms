//Copy string
#include<iostream>
using namespace std;

void strcpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];	//Bhrallei Book
	char Brr[20];	//Kori Book

	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strcpyX(Arr,Brr);
	cout<<"String after Copy: "<<Brr<<endl;

	return 0;
}