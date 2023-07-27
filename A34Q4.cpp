//Accept N numbers and display maximum number in genric way
#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int Size)
{
	T Max = Arr[0];
	int i = 0;

	for(i = 0; i < Size; i++)
	{
		if(Arr[i] > Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}
int main()
{
	int Brr[] = {10,20,30,40,50};
	int ret = Maximum(Brr,5);
	cout<<"Maximum number is: "<<ret<<endl;

	float Crr[] = {10.1,20.2,30.3,40.4,50.5};
	float fret = Maximum(Brr,5);
	cout<<"Maximum number is: "<<fret<<endl;
	
	return 0;
}