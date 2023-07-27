#include<stdio.h>
//Input : 721
//Output
//10 digits
int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iDigit + iSum;
        iNo = iNo /10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits are %d",iRet);


    return 0;
}