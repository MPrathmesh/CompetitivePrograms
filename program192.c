//File Handling topic start
//Create file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//Read 4
//write 2
//excute 1

//Permissions 0_Owner_Group_Other

int main()
{
	char Fname[20];
	int fd = 0;			//file descripter

	printf("Enter file name to create\n");
	scanf("%s",Fname);

	fd = creat(Fname,0777);
	if(fd == -1)
	{
		printf("Unable to create the file\n");
		return -1; 	//failure
	}
	else
	{
		printf("File is successfully created with FD %d\n",fd);
	}

	return 0;
}