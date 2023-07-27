#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	//step 1 Allocate the memory
	newn = (PNODE)malloc(sizeof(NODE));
	
	//step 2 INitialize the node
	newn->data = no;
	newn->next=NULL;
	
	//Step 3 Insert the node
	if (*Head == NULL)
	{
		*Head = newn;
	}
	else 
	{
		newn -> next = *Head;
		*Head = newn;	
	}		
}

void InsertLast(PPNODE Head, int no)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	
	//step 1 Allocate the memory
	newn = (PNODE)malloc(sizeof(NODE));
	
	//step 2 INitialize the node
	newn->data = no;
	newn->next=NULL;
	
	//Step 3 Insert the node
	
	if (*Head == NULL)
	{
		*Head = newn;
	}
	else 
	{
	  while(temp->next != NULL)
	  {
	    temp = temp -> next;
	  }
	  temp->next = newn;
	}		
}

void Display(PNODE Head)
{
  while(Head != NULL)
  {
    printf("%d\t",Head->data);
    Head = Head -> next;
  }
}

int Count(PNODE Head)
{
  int iCnt = 0;
  while(Head != NULL)
  {
    iCnt++;
    Head = Head -> next;
  }
  return iCnt++;
}

void DeleteFirst(PPNODE Head)
{
  PNODE temp = *Head;
  
  if(*Head == NULL) // if LL contains atleast one node
  {
    *Head = (*Head) -> next;
    free(temp);
  }
} 

void DeleteLast(PPNODE Head)
{
  PNODE temp = *Head;
  if(*Head == NULL)
  {
    return;
  }
  else if((*Head)->next == NULL) // LL contains one node
  {
    free(*Head);
    *Head = NULL;
  }
  else // LL contains more then one node
  {
    while(temp->next->next != NULL)
    {
      temp = temp -> next;
    }
  }
}

int SearchFirstOcc(PNODE Head, int iNo)
{
	int index=0;
	int ilength = Count(Head);
	
	for(index = 0; index <= ilength; index++)
	{
		if((Head->data) == iNo)
		{
			return index;
			break;
		}
		Head = Head -> next;
	}
	if(index > ilength)
	{
		return -1;
	}
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	int iNumber = 0;

	printf("Enter the number to find : ");
	scanf("%d",&iNumber);

	InsertFirst(&first,70);
	InsertFirst(&first,30);  //InsetFirst(50,51);  call asa asel same for khalche2
	InsertFirst(&first,50);
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);

	Display(first); //Display(100);
	iRet = SearchFirstOcc(first ,iNumber);
	
	printf("\n Element found on index is : %d\n",iRet+1);
	
	return 0;
}

/*
  void InsertFirst(PPNODE Head, int no)
  void InsertLast(PPNODE Head,int no)
  void InstertAtPos(PPNODE Head, int no, int pos)
  
  void DeleteFirst(PPNODE Head)
  void DeleteLast(PPNODE Head) 
  void DeleteAtPos(PPNODE Head, int pos)
  
  void Display(PPNODE Head)
  int Count(PPNODE Head)
*/
