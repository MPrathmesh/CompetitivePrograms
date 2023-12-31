//Singly Circular LinkedList in genric way
#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T> 
class SinglyCLL
{
	public:
		struct node<T> *Head;
		struct node<T> *Tail;
		int Count;

		SinglyCLL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T, int ipos);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int ipos);
		void Display();
		int CountNode();

};

template <class T>
SinglyCLL<T> :: SinglyCLL()
{
	Head = NULL;
	Tail = NULL;
	Count = 0;
}

template<class T>
void SinglyCLL<T> :: InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;

	newn->data = no;
	newn->next = NULL;

	if((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn -> next = Head;
		Head = newn;
	}
	Tail->next = Head;
	Count++;
}

template <class T>
void SinglyCLL<T> :: InsertLast(T no)
{
	struct node<T> *newn = NULL;

	newn = new node<T>;
	newn->data = no;
	newn->next = NULL;

	if((Head == NULL) && (Tail == NULL))	//If LL is empty
	{
		Head = newn;
		Tail = newn;
	}
	else	//If LL contains at least one node
	{
		Tail->next = newn;
		Tail = newn;
	}
	Tail -> next = Head;
	Count++;
} 

template <class T>
void SinglyCLL<T> :: InsertAtPos(T no, int ipos)
{
	int iSize = CountNode();

	if((ipos < 1) || (ipos > iSize + 1))
	{
		cout<<"Invalid position"<<endl;
		return;
	}

	if(ipos == 1)
	{
		InsertFirst(no);
	}
	else if(ipos == iSize + 1)
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *newn = NULL;

		newn = new node<T>;

		newn->data = no;
		newn->next = NULL;

		struct node<T> *temp = Head;
		int iCnt = 0;

		for(iCnt = 1; iCnt < ipos - 1; iCnt++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next = newn;
		Count++;
	}
}

template <class T>
void SinglyCLL<T> :: DeleteFirst()
{
	if(Head == NULL && Tail == NULL)
	{
		return;
	}

	else if(Head = Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head->next;
		delete Tail->next;

		Tail->next = Head;
	}
	Count--;
}

template <class T>
void SinglyCLL<T> :: DeleteLast()
{
	if(Head == NULL && Tail == NULL)
	{
		return;
	}

	else if(Head = Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		struct node<T> *temp = Head;

		while(temp->next != Tail)
		{
			temp = temp->next;
		}

		delete Tail;
		Tail = temp;

		Tail->next = Head;
	}
	Count--;
}

template <class T>
void SinglyCLL<T> :: DeleteAtPos(int ipos)
{
	int iSize = CountNode();

	if((ipos < 1) || (ipos > iSize))
	{
		cout<<"Invalid position\n";
		return;
	}

	if(ipos == 1)
	{
		DeleteFirst();
	}
	else if(ipos == iSize)
	{
		DeleteLast();
	}
	else
	{
		struct node<T> *temp1 = Head;
		int iCnt = 0;

		for(iCnt = 1; iCnt < ipos - 1; iCnt++)
		{
			temp1 = temp1->next;
		}

		struct node<T> *temp2 = temp1->next;

		temp1->next = temp2->next;
		delete temp2;
	}
	Count--;
}

template <class T>
void SinglyCLL<T> :: Display()
{
	struct node<T> *temp = Head;

	if(Head == NULL && Tail == NULL)
	{
		return;
	} 

	do
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp->next;
	}
	while(temp != Head);
	cout<<endl;
}

template <class T>
int SinglyCLL<T> :: CountNode()
{
	return Count;
} 

int main()
{
	SinglyCLL <int>obj;
	SinglyCLL <char>obj2;

	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.InsertLast(151);
	obj.InsertLast(201);

	obj.Display();
	cout<<"Number of nodes are: "<<obj.CountNode()<<endl;

	obj.InsertAtPos(75,4);

	obj.Display();
	cout<<"Number of nodes are: "<<obj.CountNode()<<endl;

	obj.DeleteAtPos(4);

	obj.Display();
	cout<<"Number of nodes are: "<<obj.CountNode()<<endl;

	obj2.InsertFirst('A');
	obj2.InsertFirst('B');
	obj2.InsertFirst('C');
	obj2.InsertLast('D');
	obj2.InsertLast('E');
	obj2.InsertLast('F');
	obj2.InsertLast('G');
	obj2.InsertLast('H');

	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

	obj2.InsertAtPos('P',4);

	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

	obj2.DeleteAtPos(4);

	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

	return 0;
}