//Accept 2 name of file from user first file is existing and second file create on time then copy the data one file to another file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#define FILESIZE 1024

void FileCopy(char Source[], char Destination[])
{
	int Fdsrc = 0, Fddest = 0, iRet = 0;
	char Buffer[FILESIZE];

	Fdsrc = open(Source,O_RDONLY);
	if(Fdsrc == -1)
	{
		printf("Unable to open source file\n");
		return;
	}

	Fddest = creat(Destination,0777);
	if(Fddest == -1)
	{
		printf("Unable to create new file\n");
		return;
	}

	while((iRet = read(Fdsrc,Buffer,FILESIZE)) != 0)
	{
		write(Fddest,Buffer,iRet);	
	}

	close(Fdsrc);
	close(Fddest);

}

int main()
{
	char Fname1[20];
	char Fname2[20];

	printf("Enter file name which contains the data\n");
	scanf("%s",Fname1);

	printf("Enter the file name that you want to create\n");
	scanf("%s",&Fname2);

	FileCopy(Fname1,Fname2);

	return 0;
}