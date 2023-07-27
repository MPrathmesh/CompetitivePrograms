//3.Write genric program to accept N values from user and return addition of that values.
#include<iostream>
using namespace std;

template <class T>
T AddN(T Arr[], int Size)
{
	T Sum = Arr[0];
	int i = 0;

	for(i = 0; i < Size; i++)
	{
		Sum =Sum + Arr[i];
	}
	return Sum;
}
int main()
{
	int Brr[] = {10,20,30,40,50};
	int ret = AddN(Brr,5);
	cout<<"Addition of number is: "<<ret<<endl;

	float Crr[] = {10.1,20.2,30.3,40.4,50.5};
	float fret = AddN(Brr,5);
	cout<<"Addition of number is: "<<fret<<endl;
	
	return 0;
}