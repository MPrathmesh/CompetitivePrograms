//Accept linkedlist and return middle element
//Updated Code
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

int MiddleElement(PNODE Head)
{
    PNODE Fast = Head;
    PNODE Slow = Head;

    while(Fast != NULL && Fast->next != NULL)
    {
        Fast = Fast->next->next;
        Slow = Slow->next;
    }
    return Slow->data;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,24);
    InsertFirst(&First,22);
    InsertFirst(&First,24);
    InsertFirst(&First,496);
    InsertFirst(&First,6);
    InsertFirst(&First,34);

    Display(First);

    iRet = MiddleElement(First);
    printf("Middle Elements is %d\n",iRet);
    return 0;
}