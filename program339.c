//Accept linkedlist and Accept Number for search last Occurance
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while(Head != NULL)
    {
        printf("|%d|-> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int SearchLastOccurance(PNODE Head, int iNo)
{
    int iPos = -1, iCnt = 1;

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            iPos = iCnt;
        }
        iCnt++;
        Head = Head->next;
    }
    return iPos;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,24);
    InsertFirst(&First,22);
    InsertFirst(&First,24);
    InsertFirst(&First,496);
    InsertFirst(&First,24);
    InsertFirst(&First,6);

    Display(First);

    iRet = SearchLastOccurance(First,24);
    printf("First Occurance is %d\n",iRet);
    return 0;
}