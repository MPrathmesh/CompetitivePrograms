//Accept singly linkedlist and check loop ahe ka nahi hi detect karaych
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckLoop(PNODE Head)
{
    PNODE Fast = Head;
    PNODE Slow = Head;
    bool Flag = false;

    while((Fast != NULL) && (Fast->next != NULL))
    {
        Slow = Slow -> next;
        Fast = Fast -> next -> next;

        if(Fast == Slow)
        {
               Flag = true;
               break;
        }
    }
    return Flag;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    bool bRet = false;

    PNODE Third = NULL;
    PNODE Last = NULL;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Third = First; //100
    Last = First;    //100

    Third = Third -> next -> next; //300
    Last = Last -> next -> next -> next -> next; //500

    Last -> next = Third;

    bRet = CheckLoop(First);
    if(bRet == true)
    {
        printf("There is a loop in linked list\n");
    }
    else
    {
        printf("There is no loop in linked list\n");
    }

    return 0;
}