//Accept N numbers and display in genric way
#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[], int Size)
{
	int i = 0;
	for(i = 0; i < Size; i++)
	{
		cout<<Arr[i]<<endl;
	}
}

int main()
{
	int Brr[] = {10,20,30,40,50};
	Display(Brr,5);

	float Crr[] = {10.1,20.2,30.3,40.4,50.5};
	Display(Crr,5);
	return 0;
}