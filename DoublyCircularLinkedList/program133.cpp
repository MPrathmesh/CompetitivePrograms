//DoublyCLL
#include"Header133.h"

int main()
{
	int iRet = 0;
	
	DoublyCLL obj;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.InsertLast(151);
	obj.InsertLast(201);

	obj.Display();
	iRet = obj.Count();

	cout<<endl<<"Number of nodes are: "<<iRet<<endl;


	return 0;
}