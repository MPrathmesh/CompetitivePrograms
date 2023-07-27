//2.Write a genric way to find largest number from three number
#include<iostream>
using namespace std;

template <class T>
T Max(T num1, T num2, T num3)
{
	if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\n Largest number = %d \n",num1);
        }
        else
        {
            printf("\n Largest number = %d \n",num3);
        }
    }
    else if (num2 > num3)
    {
        printf("\n Largest number = %d \n",num2);
    }
    else
    {
        printf("\n Largest number = %d \n",num3);
    }
}

int main()
{
	Max(10,20,30);

	Max(10.0f,20.0f,30.0f);

	return 0;
}