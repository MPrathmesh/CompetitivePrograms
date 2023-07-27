//Write a program which accepts file name and one count from user and read that number of characters from starting position.
/*
	Input: Demo.txt	 12
	Output: Display first 12 characters from Demo.txt
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdbool.h>
#include<string.h>
#include<unistd.h>

int main()
{
	char Fname[20];
	int Fd = 0;
	char Data[10];

	printf("Enter file name\n");
	scanf("%s",Fname);

	Fd = open(Fname,O_RDONLY);
	if(Fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	lseek(Fd,0,12);

	read(Fd,Data,12);
	write(1,Data,12);

	return 0;
}