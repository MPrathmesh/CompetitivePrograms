//Write application which accept file name from user and create that file.
/*
	Input:Demo.txt
	Output: File created successfully.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char Fname[20];
	int fd = 0;

	printf("Enter file name to create\n");
	scanf("%s",Fname);

	fd = creat(Fname,0777);
	if(fd == -1)
	{
		printf("Unable to create the file\n");
		return -1;
	}
	else
	{
		printf("File is successfully created with Fd %d\n",fd);
	}

	return 0;
}