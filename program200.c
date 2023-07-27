//File Handling 
//Accept file name and display the all data
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[10];
	int fd = 0;			//file descripter
	int iRet = 0;

	printf("Enter file name to open\n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1; 	//failure
	}

	printf("File is succesfully opend with FD %d\n",fd);

	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		write(1,Data,iRet);
	}

	close(fd);

	/*read(fd,Data,sizeof(Data));
	read(fd,Data,sizeof(Data));
	read(fd,Data,sizeof(Data));*/

	return 0;
}

//0 STDIN		KeyBoard
//1	STDOUT		Monitor
//2	STDERR		Monitor