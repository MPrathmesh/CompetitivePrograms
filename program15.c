//Program to display 5 times hello on screen

#include<stdio.h>

//Demonstration of Iteration

void Display(int iNo)  //Defination
{
    int iCnt = 0;
    //      1         2      3
    for(iCnt = 0; iCnt < iNo; ++iCnt)
    {             //4
        printf("Hello\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);    //function call

    return 0;
}