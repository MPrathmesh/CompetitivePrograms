//Write a genric program which accept one value and one number from user. print that value that number of times on screen
/*
	Input: M 7

	OutPut: M M M M M M M

	Input: 11 3

	OutPut: 11 11 11
*/

#include<iostream>
using namespace std;

template <class T>
void Display(T value, int size)
{
	int i = 0;
	for(i = 0; i < size; i++)
	{
		cout<<value<<"\t";
	}
	cout<<endl;
}

int main()
{
	Display('M',7);
	Display(11,3);
	Display(3.7,6);

	return 0;
}