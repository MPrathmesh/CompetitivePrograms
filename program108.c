//New Topic - Data Structures
#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node 
{
	int data;			//4
	struct node *next;	//8
};

int main()
{
	//Static memory allocation
	struct node obj;

	//Dynamic memory allocation
	struct node *ptr = (struct node *)malloc(sizeof(struct node));

	obj.data = 11;		//Direct accessing operator '.'
	obj.next = NULL;

	ptr -> data = 11;	//Indirect accessing operator->
	ptr -> next = NULL;

	return 0;
}