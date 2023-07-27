#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;    //Characteristic
    public:
        //Behaviours
        void Accept()   //Setter
        {
            cout<<"Enter the value: "<<endl;
            cin>>this->iNo;
        }
        void Display()      //getter
        {
            cout<<"Value is: "<<this->iNo<<endl;
        }
        int Factorial()
        {
            int iFact = 1;
            int iCnt = 0;
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                 iFact *= iCnt;
            }
            return iFact;
        }
};

int main()
{
    Number nobj;
    int iRet = 0;

    //cout<<nobj.iNo;   //error
    nobj.Accept();
    nobj.Display();
    iRet = nobj.Factorial();

    cout<<"Factorial is: "<<iRet<<endl;

    return 0;
}