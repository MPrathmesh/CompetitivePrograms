/*
    Algorithm
    START
    Accept number from user as No
    check whether that number is negative or not
    if it is negative then covert it to poitive

    create one variable as Sum and set it to 0
    Create one variable as Cnt and set it to 1

    iterate till Cnt is less than or equal to NO
    Add the value of Cnt into the variable Sum
    Increment the value of Cnt by 1

    Loop

        Disply the value of sum
    END
*/
#include<stdio.h>

int Summation(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d\n",iRet);

    return 0;
}