//Doubly Liner LinkedList in Genric
#include<iostream>
using namespace std;

template <class T>
struct node
{
	T data;
	struct node *next;
	struct node *prev;
};

template <class T>
class DoublyLL
{
	public:
		struct node<T> *Head;
		int Count;

		DoublyLL();
		~DoublyLL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T,int);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		void Display();
		int CountNode();

};

template <class T>
DoublyLL<T> :: DoublyLL()
{
	Head = NULL;
	Count = 0;
}

template <class T>
DoublyLL<T> :: ~DoublyLL()
{
	struct node<T> *temp = Head;

	if(Head != NULL)
	{
		while(Head != NULL)
		{
			Head = Head->next;
			delete temp;
			temp = Head;
		}
	}
}

template <class T>
void DoublyLL<T> :: InsertFirst(T no)
{
	struct node<T> *newn = NULL;

	newn = new node<T>;
	if(newn == NULL)
	{
		return;
	}	

	newn->next = NULL;
	newn->prev = NULL;
	newn->data = no;

	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		Head->prev = newn;
		newn->next = Head;
		Head = newn;
	}
	Count++;
} 

template<class T>
void DoublyLL<T> :: InsertLast(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;

	newn->prev = NULL;
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
		newn->prev = temp;
	}
	Count++;
}

template <class T>
void DoublyLL<T> :: InsertAtPos(T no, int pos)
{
	if((Head == NULL) || (pos > Count + 1) || (pos <= 0))
	{
		return;
	}

	if(pos == 1)
	{
		InsertFirst(no);
	}
	else if(pos == Count + 1)
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *newn = NULL, *temp = Head;

		newn = new node<T>;
		if(newn == NULL)
		{
			return;
		}

		newn->next = NULL;
		newn->next = NULL;
		newn->data = no;

		for(int i = 1; i <= (pos-2); i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		newn->prev = temp;
		temp->next = newn;
	}
	Count++;
}

template <class T>
void DoublyLL<T> :: DeleteFirst()
{
	struct node<T> *temp = Head;

	if(Head == NULL)
	{
		return;
	}
	else
	{
		Head = Head->next;
		Head->prev = NULL;

		delete temp;
	}
	Count--;
}

template <class T>
void DoublyLL<T> :: DeleteLast()
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
		struct node<T> *temp = Head;

		while((temp->next) != NULL)
		{
			temp = temp->next;
		}

		temp->prev->next = NULL;
		delete temp;
	}
	Count--;
}

template <class T>
void DoublyLL<T> :: DeleteAtPos(int pos)
{
	if((Head == NULL) || (pos > Count) || (pos <= 0))
	{
		return;
	}
	else if(pos == 1)
	{
		DeleteFirst();
	}
	else if(pos == Count)
	{
		DeleteLast();
	}
	else
	{
		struct node<T> *temp = Head;

		for(int i = 1; i <= (pos-2); i++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
	}
	Count--;
}

template <class T>
void DoublyLL<T> :: Display()
{
	struct node<T> *temp = Head;

	cout<<"Elements from doubly Linked list are:"<<endl;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<endl;
}

template <class T>
int DoublyLL<T> :: CountNode()
{
	return Count;
} 

int main()
{
	DoublyLL <int>obj1;
	DoublyLL <float>obj2;

	obj1.InsertFirst(11);
	obj1.InsertFirst(21);
	obj1.InsertFirst(51);
	obj1.InsertLast(101);
	obj1.InsertLast(111);
	obj1.InsertAtPos(121,3);

	obj1.Display();
	cout<<"Number of nodes are: "<<obj1.CountNode()<<endl;

	obj1.DeleteFirst();
	obj1.DeleteLast();
	obj1.DeleteAtPos(2);
	obj1.Display();
	cout<<"Number of nodes are: "<<obj1.CountNode()<<endl;

	obj2.InsertFirst(11.11);
	obj2.InsertFirst(21.11);
	obj2.InsertFirst(51.11);
	obj2.InsertLast(101.11);
	obj2.InsertLast(111.11);
	obj2.InsertAtPos(121.11,3);

	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

	obj2.DeleteFirst();
	obj2.DeleteLast();
	obj2.DeleteAtPos(2);
	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

	return 0;
}