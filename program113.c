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
	PNODE temp = NULL;

	newn = (PNODE)malloc(sizeof(NODE)); //newn = (struct node *)malloc(12);

	newn->Data = No;
	newn->next = NULL;

	if(*head == NULL)	//LL is empty
	{
		*head = newn;
	}
	else	
	{
		//trevel till last node
		//store address of new node in the next pointer of that node
		temp = *head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
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
	printf("\n");
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

void DeleteFirst(PPNODE head)
{
	//if LL is empty then return
	//if LL contains at least one node then 
	//store the address of second node in the first pointer through head
	//and delete the first node.

	PNODE temp = NULL;
	if(*head == NULL) //LL is empty
	{
		return;
	}
	else 	//LL contains one node
	{
		temp = *head;
	    *head = temp->next;
	    free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	//If LL is empty then return
	//If LL contains LL one node then delete that node and return
	//If LL contains more than one node then travel till second last node and delete last node

	PNODE temp = NULL;

	if(*head == NULL)	//LL is empty
	{
		return;
	}
	else if((*head) -> next == NULL) //LL contains one node
	{
		free(*head);
		*head = NULL;
	}
	else 	//LL conatins more than one node
	{
		temp = *head;
		while(temp->next->next != NULL)
		{
			temp = temp -> next;
		}

		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE head, int No, int Pos)
{
	//Consider number of nodes are 4

	//If position is invalid then return directly(< 1 or >5)
	//If position is one then call InsertFirst	
	//If position is N + 1 then call InsertLast(postion is 5)
	
	int size = 0,iCnt = 0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	size = Count(*head);

	if((Pos < 1) || (Pos >(size+1)))
	{
		printf("Position is invalid\n");
		return;
	}

	if(Pos == 1)
	{
		InsertFirst(head,No);
	}
	else if(Pos == (size+1))
	{
		InsertLast(head,No);
	}
	else 	//Actual Logic
	{
		PNODE newn = NULL;
		PNODE temp = NULL;

		newn = (PNODE)malloc(sizeof(NODE)); //newn = (struct node *)malloc(12);

		newn->Data = No;
		newn->next = NULL;

		temp = *head;

		for(iCnt = 1; iCnt < Pos-1;iCnt++)
		{
			temp = temp -> next;
		}
		newn -> next = temp->next;
		temp -> next = newn;
	}	
}

void DeleteAtPos(PPNODE head, int Pos)
{
	//Consider number of nodes are 4

	//If position is invalid then return directly(< 1 or > 4)
	//If position is one then call DeleteFirst	
	//If position is N then call DeleteLast(postion is 4)
	
	int size = 0,iCnt = 0;
	PNODE temp = NULL;
	PNODE tempdelete = NULL;

	size = Count(*head);

	if((Pos < 1) || (Pos >(size)))
	{
		printf("Position is invalid\n");
		return;
	}

	if(Pos == 1)
	{
		DeleteFirst(head);
	}
	else if(Pos == (size))
	{
		DeleteLast(head);
	}
	else 	//Actual Logic
	{
		temp = *head;

		for(iCnt = 1; iCnt < Pos-1;iCnt++)
		{
			temp = temp -> next;
		}
		tempdelete = temp -> next;
		temp->next = temp->next->next;
		free(tempdelete);
	}
}

int main()
{
	int iRet = 0;
	PNODE first = NULL;

	InsertFirst(&first,101); //call by address
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);

	InsertAtPos(&first,75,3);

	DeleteAtPos(&first,3);

	Display(first); //call by value 

	iRet = Count(first);	//call by value
	printf("Number of nodes are: %d\n",iRet);

	InsertFirst(&first,1);

	Display(first); //call by value

	iRet = Count(first);	//call by value
	printf("Number of nodes are: %d\n",iRet);

	InsertLast(&first,111);
	InsertLast(&first,121);

	Display(first);

	DeleteFirst(&first);
	DeleteFirst(&first);

	Display(first); //call by value

	iRet = Count(first);	//call by value
	printf("Number of nodes are: %d\n",iRet);

	DeleteLast(&first);
	Display(first); //call by value

	iRet = Count(first);	//call by value
	printf("Number of nodes are: %d\n",iRet);

	return 0;
}