//Write a program hich displays ASCII table. Table contains symbol,Decimal,Hexadecimal and octal representation of every member from 0 to 255
#include<stdio.h>

void Ascii()
{
    int iCnt = 0;
    char ch = 0;
    for(iCnt =0; iCnt <=250 ; iCnt++)
    {
        printf("%c\n",ch = iCnt);
    }
}
int main()
{
    printf("Ascii Table is :");
    Ascii();    
    return 0;
}