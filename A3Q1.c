//1: write a program which accept one number from user and print that number of even numbers on screen
#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 1;
    int i = 1;
    while(iCnt <= iNo)
    {
        if(i % 2 == 0)
        {
            iCnt++;
            printf("%d\t",i);
        }
        i++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}