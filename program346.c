//BST(Binary Search tree)topic start
#include<stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int iNo)
{
    PNODE temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)   //BST empty
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {   
            if(iNo > temp->data) //R la Janar
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(iNo < temp->data)  //L la jaanar
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(iNo == temp->data) //Duplicate iNo Not allowed
            {
                free(newn);
                printf("Data is alredy there in BST\n");
                break;
            }
        }      
    }
}

void Inorder(PNODE Head)
{
    if(Head != NULL)
    {
        Inorder(Head->lchild);
        printf("%d ",Head->data);
        Inorder(Head->rchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d ",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head != NULL)
    {
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d ",Head->data);
    }
}

int main()
{
    PNODE First = NULL;

    Insert(&First,11);
    Insert(&First,21);
    Insert(&First,7);

    printf("Inorder Data\n");
    Inorder(First);

    printf("\nPostorder Data\n");
    Postorder(First);

    printf("\nPreorder Data\n");
    Preorder(First);

    //7 11 21   L D R  //Inorder
    //11 7 21   D L R  //Preorder
    //7 21 11   L R D  //PostOrder

    return 0;
}