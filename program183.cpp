#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
	public:
		T *Arr;
		int Size;

		ArrayX(int value);
		~ArrayX();
		void Accept();
		void Display();
		T Maxmimum();
};

template <class T>
ArrayX<T> :: ArrayX(int value)
{
	Size = value;
	Arr = new T[value];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
	delete []Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
	cout<<"Enter the values: "<<endl;
	for(int i = 0; i < Size; i++)
	{
		cin>>Arr[i];
	}
}

template <class T>
void ArrayX<T> :: Display()
{
	cout<<"Values are: "<<endl;
	for(int i = 0; i < Size; i++)
	{
		cout<<Arr[i]<<endl;;
	}
}

//returnvalue classname :: functionname(paramter)
//{}

template <class T>
T ArrayX<T> :: Maxmimum()
{
	T Max = Arr[0];
	for(int i = 0; i < Size; i++)
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
	ArrayX <int>obj1(5);
	obj1.Accept();
	obj1.Display();
	int ret = obj1.Maxmimum();

	cout<<"Maxmimum is: "<<ret<<endl;

	return 0;
}