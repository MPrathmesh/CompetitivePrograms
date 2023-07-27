//Write genric prigram to accept N values and search Last occurrenc on any specific value.

/*
	Input: 10 20 30 10 30 40 10 40 10
	value to serch : 40

	Output: 7
*/

#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int size, T iNo)
{
	int iCnt = 0;

	for(iCnt = size-1; iCnt >= 0; iCnt--)
	{
		if(iNo == arr[iCnt])
		{
			break;
		}
	}
	return iCnt;
}

int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	int iRet = SearchLast(arr,9,40);
	printf("%d\n",iRet);

	return 0;
}