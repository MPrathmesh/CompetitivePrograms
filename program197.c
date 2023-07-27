//File Handling 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[100];
	int fd = 0;			//file descripter
	int iRet = 0;

	printf("Enter file name to open\n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDWR | O_APPEND);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1; 	//failure
	}

	printf("Enter the data that you want to write:\n");
	scanf(" %[^'\n']s",Data);

	iRet = write(fd,Data,strlen(Data));

	printf("%d Bytes gets succesfully written in the file\n");

	return 0;
}