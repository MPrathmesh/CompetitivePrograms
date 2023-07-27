//5.Accept divison of student from user and depends on the divison display exam timing.
//There are 4 divisions in school as A,B,C,D.
//Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//(Applicaion should be insensitive)
/*
	Input: C
	Output: Your exam at 9.20 AM

	Input: d
	Output: Your exam at 10.30 AM
*/
#include <stdio.h>

void DisplaySchedule(char chDiv)
{
	switch(chDiv)
	{
		case 'A':
			printf("Your Exam at 7 AM\n");
			break;

		case 'a':
			printf("Your Exam at 7 AM\n");
			break;

		case 'B':
			printf("Your Exam at 8:30 AM\n");
			break;

		case 'b':
			printf("Your Exam at 8:30 AM\n");
			break;

		case 'C':
			printf("Your Exam at 9:20 AM\n");
			break;

		case 'c':
			printf("Your Exam at 9:20 AM\n");
			break;

		case 'D':
			printf("Your Exam at 10:30 AM\n");
			break;

		case 'd':
			printf("Your Exam at 10:30 AM\n");
			break;

	}	
}
int main()
{
	char Div = '\0';

	printf("Enter your divison\n");
	scanf("%c",&Div);

	DisplaySchedule(Div);

	return 0;
}