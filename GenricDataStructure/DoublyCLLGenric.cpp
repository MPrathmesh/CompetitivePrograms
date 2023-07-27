//Doubly Circular LinkedList in Genric
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
class DoublyCLL
{
	public:
		struct node<T> *Head;
		struct node<T> *Tail;
		int Count;

		DoublyCLL();

		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T,int);

		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);

		int CountNode();
		void Display();
};

template <class T>
DoublyCLL<T> :: DoublyCLL()
{
	Head = NULL;
	Tail = NULL;
	Count = 0;
}

template <class T>
void DoublyCLL<T> :: InsertFirst(T iNo)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;

	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;

	if(Count == 0) //if(head == NULL) && (Tail == NULL)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn->next = Head;
		Head->prev = newn;
		Head = newn;
	}
	Head->prev = Tail;
	Tail->next = Head;

	Count++;
}

template <class T>
void DoublyCLL<T> :: InsertLast(T iNo)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;

	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;

	if(Count == 0) //if(head == NULL) && (Tail == NULL)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		Tail->next = newn;
		newn->prev = Tail;

		Tail = newn;
	}
	Head->prev = Tail;
	Tail->next = Head;

	Count++;
}

template <class T>
void DoublyCLL<T> :: InsertAtPos(T iNo, int ipos)
{
	if((ipos < 1) || (ipos > Count + 1))
	{
		cout<<"Invalid position\n";
		return;
	}

	if(ipos == 1)
	{
		InsertFirst(iNo);
	}
	else if(ipos == Count+1)
	{
		InsertLast(iNo);
	}
	else
	{
		struct node<T> *newn = NULL;
		newn = new node<T>;

		newn->data = iNo;
		newn->next = NULL;
		newn->prev = NULL;

		struct node<T> *temp = Head;

		for(int i = 1; i< ipos - 1; i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
	}
	Count++;
}

template <class T>
void DoublyCLL<T> :: DeleteFirst()
{
	if(Count == 0)
	{
		return;
	}
	else if(Count == 1)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head->next;
		delete Tail->next;
	}
	Tail->next = Head;
	Head->prev = Tail;

	Count--;
}

template <class T>
void DoublyCLL<T> :: DeleteLast()
{
	if(Count == 0)
	{
		return;
	}
	else if(Count == 1)
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
void DoublyCLL<T> :: DeleteAtPos(int ipos)
{
	if((ipos < 1) || (ipos > Count))
	{
		return;
	}

	if(ipos == 1)
	{
		DeleteFirst();
	}
	else if(ipos == Count)
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
void DoublyCLL<T> :: Display()
{
	int i = 0;
	struct node<T> *temp = Head;

	for(i = 1; i <= Count; i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp->next;
	}
	cout<<endl;
}

template <class T>
int DoublyCLL<T> :: CountNode()
{
	return Count;
}

int main()
{
	DoublyCLL <int>obj;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertAtPos(71,4);

	obj.Display();
	cout<<"Number of nodes are: "<<obj.CountNode()<<endl;

	obj.DeleteAtPos(4);
	obj.DeleteFirst();
	obj.DeleteLast();

	obj.Display();
	cout<<"Number of nodes are: "<<obj.CountNode()<<endl;

	DoublyCLL <float>obj2;

	obj2.InsertFirst(51.11);
	obj2.InsertFirst(21.11);
	obj2.InsertFirst(11.11);
	obj2.InsertLast(101.11);
	obj2.InsertLast(111.11);
	obj2.InsertAtPos(71.11,4);

	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

	obj2.DeleteAtPos(4);
	obj2.DeleteFirst();
	obj2.DeleteLast();

	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

	return 0;
}