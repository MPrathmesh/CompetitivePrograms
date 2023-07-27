//Genric Programming
#include<iostream>
using namespace std;

void SwapR(int &p, int &q)		//R for reference
{
	int Temp;
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