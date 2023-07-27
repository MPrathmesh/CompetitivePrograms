//Recursion topic
#include<stdio.h>
//123
//3 2 1
void DisplayI(int no)	//I for iterative
{
	while(no != 0)
	{
		printf("%d\t",no % 10);
		no = no / 10;
	}
}

void DisplayR(int no) //R for recursion
{
	if(no != 0)
	{
		no = no / 10;
		DisplayR(no);
		printf("%d\t",no % 10);
	}
}

int main()
{
	DisplayI(123);
	printf("\n");
	DisplayR(123);

	return 0;
}