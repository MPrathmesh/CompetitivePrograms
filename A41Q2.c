//Write a program which accepts file name from user and count number of small characters from that file.
/*
	Input: Demo.txt
	Output: Number of Small characters are 3
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountSmall(char Fname[])
{
    int fd = 0, iRet = 0, i = 0, iFrequency = 0;
    char Data[FILESIZE];

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
        	if(Data[i] >= 'a' && Data[i] <= 'z')
        	{
        		iFrequency++;
        	}
        }
    }

    close(fd);
    return iFrequency;
}

int main()
{
    char Fname[20];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    iRet = CountSmall(Fname);
    printf("Number of Small character : %d\n",iRet);

    return 0;
}