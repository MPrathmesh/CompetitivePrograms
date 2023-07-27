//5.Accept on chracter from user and check whether that character is vowel(a,e,i,o,u) or not.
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char iCh)
{
    if(iCh == 'a' || iCh == 'e' || iCh == 'i' || iCh == 'o' || iCh == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}



int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("Its vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}