//Genric Programming
#include<iostream>
using namespace std;

template<class T>

void SwapR(T &p, T &q)		//R for reference
{
 	T Temp;
	Temp = p;
	p = q;
	q = Temp;
}

int main()
{
	int No1 = 11, No2 = 21;

	cout<<"Before swap data is: "<<No1<<" "<<No2<<endl;

	SwapR(No1, No2);

	cout<<"After swap data is: "<<No1<<" "<<No2<<endl;

	return 0;
}