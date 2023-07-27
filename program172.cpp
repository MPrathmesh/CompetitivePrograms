//Genric Programming Topic Start
#include<iostream>
using namespace std;

void SwapA(int *p, int *q)		//A is address 
{
	int Temp;
	Temp = *p;
	*p = *q;
	*q = Temp;
}

int main()
{
	int No1 = 11, No2 = 21;

	cout<<"Before swap data is: "<<No1<<No2<<endl;

	SwapA(&No1, &No2);

	cout<<"After swap data is: "<<No1<<" "<<No2<<endl;

	return 0;
}