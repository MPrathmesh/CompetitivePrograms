//Write a program which accepts file name from user and one character from user and count number of occurrences of that characterfrom that file.
/*
	Input: Demo.txt        'M'
	Output: Frequency of M
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountChar(char Fname[], char ch)
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
        	if(Data[i] == ch)
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
    char cValue;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    printf("Enter the character\n");
    scanf(" %[^'\n']c",&cValue);

    iRet = CountChar(Fname,cValue);
    printf("Frequency is: %d\n",iRet);

    return 0;
}