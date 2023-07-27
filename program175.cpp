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

	float fNo1 = 11.0, fNo2 = 21.0;
	cout<<"Before swap data is: "<<fNo1<<" "<<fNo2<<endl;
	SwapR(fNo1, fNo2);
	cout<<"After swap data is: "<<fNo1<<" "<<fNo2<<endl;

	char cNo1 = 'A', cNo2 = 'B';
	cout<<"Before swap data is: "<<cNo1<<" "<<cNo2<<endl;
	SwapR(cNo1, cNo2);
	cout<<"After swap data is: "<<cNo1<<" "<<cNo2<<endl;

	return 0;
}