//singly linkedlist in genric
#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T> 
class SinglyLL
{
	public:
		struct node<T> *Head;
		int Count;

		SinglyLL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T, int);
		void Display();
		int CountNode();
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
};

template<class T>
SinglyLL<T> :: SinglyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void SinglyLL<T> :: InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;

	newn->data = no;
	newn->next = NULL;

	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn -> next = Head;
		Head = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T> :: InsertLast(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;

	newn->data = no;
	newn->next = NULL;

	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		struct node<T> *temp = Head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		} 
		temp->next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T> :: InsertAtPos(T no, int pos)
{
	if((Head == NULL) || (pos > Count +1) || (pos <= 0))
	{
		return;
	}

	if(pos == 1)
	{
		InsertFirst(no);
	}
	else if(pos == (Count + 1))
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *newn = NULL, *temp = Head;

		newn = new struct node<T>;
		if(newn == NULL)
		{
			return;
		}

		newn->next = NULL;
		newn->data = no;

		for(int i = 1; i < (pos - 1); i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T> :: Display()
{
	cout<<"Elements from linked list are:"<<endl;
	struct node<T> *temp = Head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

template<class T>
int SinglyLL<T> :: CountNode()
{
	return Count;
}

template<class T>
void SinglyLL<T> :: DeleteFirst()
{
	struct node<T> *temp = Head;

	if(Head == NULL)
	{
		return;
	}
	else
	{
		Head = Head->next;
		free(temp);
	}
	Count--;
}

template<class T>
void SinglyLL<T> :: DeleteLast()
{
	if(Head == NULL)
	{
		return;
	}
	else if(Head->next == NULL)
	{
		delete Head;
		Head = NULL;
	}
	else
	{
		struct node<T> *temp1 = Head, *temp2 = NULL;

		while(temp1->next->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = NULL;
		free(temp2);
	}
	Count--;
}

template<class T>
void SinglyLL<T> :: DeleteAtPos(int pos)
{
	if((Head == NULL) || (pos > Count) || (pos <= 0))
	{
		return;
	}
	else if(pos == 1)
	{
		DeleteFirst();
	}
	else if(pos == (Count))
	{
		DeleteLast();
	}
	else
	{
		struct node<T> *temp1 = Head, *temp2 = NULL;

		for(int i = 1; i <= (pos-2); i++)
		{
			temp1 = temp1->next;
			i++;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;

		delete temp2;
	}
	Count--;
}

int main()
{
	SinglyLL <int>obj1;
	SinglyLL <char>obj2;

	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
	obj1.InsertLast(51);
	obj1.InsertLast(101);

	obj1.DeleteLast();
	obj1.InsertAtPos(111,3);
	obj1.DeleteAtPos(3);

	obj1.Display();
	cout<<"Number of nodes are: "<<obj1.CountNode()<<endl;

	obj1.DeleteFirst();
	obj1.Display();
	cout<<"Number of nodes are: "<<obj1.CountNode()<<endl;

	obj2.InsertFirst('P');
	obj2.InsertFirst('S');
	obj2.InsertFirst('A');
	obj2.InsertLast('K');
	obj2.InsertLast('S');
	obj2.InsertLast('H');
	obj2.InsertLast('I');
	obj2.InsertLast('M');
	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

	obj2.InsertAtPos('I',7);
	obj2.DeleteFirst();
	obj2.DeleteLast();
	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;


	return 0;
}