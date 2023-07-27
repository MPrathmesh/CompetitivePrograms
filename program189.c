//Recursion topic start
#include<stdio.h>

//* * * *

void DisplayI()	//I for iterative
{
	auto int iCnt = 0;

	while(iCnt != 4)
	{
		printf("*\t");
		iCnt++;
	}
}

void DisplayR() //R for recursion
{
	static int iCnt = 0;

	if(iCnt != 4)
	{
		printf("*\t");
		iCnt++;
		DisplayR(); //Recursive call
	}
}

int main()
{
	DisplayI();
	printf("\n");
	DisplayR();

	return 0;
}