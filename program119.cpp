#include<iostream>
using namespace std;
//4
// 4 * 3 * 2 * 1 = 24
// 1 * 2 * 3 * 4 = 24
int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number\n";
    cin>>iValue;

    iRet = Factorial(iValue);

    cout<<"Factorial is: "<<iRet<<endl;

    return 0;
}