//Program to display 5 times hello on screen

#include<stdio.h>

//Demonstration of Iteration

void Display()  //Defination
{
    int iCnt = 0;
    //1 Initialization
    //2 Condition
    //3 Displacement
    //4 Loop Body
    //      1         2      3
    for(iCnt = 0; iCnt <= 5; iCnt++)
    {             //4
        printf("Hello\n");
    }
}

int main()
{
    Display();

    return 0;
}