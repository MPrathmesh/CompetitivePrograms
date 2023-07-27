//Write genric prigram to accept N values and search first occurrenc on any specific value.

/*
	Input: 10 20 30 10 30 40 10 40 10
	value to serch : 40

	Output: 6
*/

#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int size, T iNo)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < size; iCnt++)
	{
		if(iNo == arr[iCnt])
		{
			break;
		}
	}
	if(iCnt == size)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	int iRet = SearchFirst(arr,9,40);
	printf("%d\n",iRet);

	return 0;
}