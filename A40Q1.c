//Write application which accept file name from user and open that file in read mode.
/*
	Input: Demo.txt
	Output: File opened successfully.
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void Display(char Fname[])
{
	int fd = 0;

	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return;
	}

	printf("File is successfully opend with FD %d\n",fd);

	close(fd);
}

int main()
{
	char Fname[20];

	printf("Enter your file name to open\n");
	scanf("%s",Fname);

	Display(Fname);

	return 0;
}