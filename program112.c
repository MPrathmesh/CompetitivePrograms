#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;	//4
	struct node *next;	//8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int No)
{
	//Allocate memory for node(Dynamically)
	//initialise that node
	
	//Check whether LL is empty or not
	//If LL is empty then new node is the first node so update its address in first pointer through head
	
	//If LL is empty then 
	//travel till last node of LL
	//store address of new node in the next pointer of last node

	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE)); //newn = (struct node *)malloc(12);

	newn->Data = No;
	newn->next = NULL;

	if(*head == NULL)	//LL is empty
	{
		*head = newn;
	}
	else	//LL contains at least one node
	{
		newn->next = *head;
		*head = newn;
	}
}

void InsertLast(PPNODE head, int No)
{
	//Allocate memory for node(Dynamically)
	//initialise that node
	
	//Check whether LL is empty or not
	//If LL is empty then new node is the first node so update its address in first pointer through head
	
	//If LL is empty then store the address of first node in the next pointer of our new node
	//Update the first pointer through head.

	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE)); //newn = (struct node *)malloc(12);

	newn->Data = No;
	newn->next = NULL;

	if(*head == NULL)	//LL is empty
	{
		*head = newn;
	}
	else	//LL contains at least one node
	{
		//code
	}
}

void Display(PNODE head)
{
	printf("Elements from linked list are: \n");

	while(head != NULL)
	{
		printf("| %d |->",head->Data);
		head = head -> next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt = 0;

	while(head != NULL)
	{
		iCnt++;
		head = head -> next;
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	PNODE first = NULL;

	InsertFirst(&first,101); //call by address
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);

	Display(first); //call by value 

	iRet = Count(first);	//call by value
	printf("Number of nodes are: %d\n",iRet);

	InsertFirst(&first,1);

	Display(first); //call by value 

	iRet = Count(first);	//call by value
	printf("Number of nodes are: %d\n",iRet);

	return 0;
}