//Write genric program to accept N values and count frequency of any specifi value.
/*
	Input: 10 20 30 10 30 40 10 40 10
	value to check frequency: 10

	Output: 4
*/

#include<iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int size, T iNo)
{
	int iCnt = 0, iFrequency = 0;
	for(iCnt = 0; iCnt < size; iCnt++)
	{
		if(iNo == arr[iCnt])
		{
			iFrequency++;
		}
	}
	return iFrequency;
}

int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	int iRet = Frequency(arr,9,10);
	printf("%d\n",iRet);

	return 0;
}