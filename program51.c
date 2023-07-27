//Input: 2 4
//Output: 16 (2 * 2 * 2 * 2)

/*
	Start
		Accept one number as no1
		Accept another number as no2

		create one variable as Mult
		set the value 1 in the variable Mult

		create one counter as cnt 
		set the counter to 1

		Iterate till the counter is less than or equal to no2
			mult = Mult * no1
			increment the counter by 1
		Goto loop

		  Display the value of mult
	End

	no1 = 2
	no2 = 4
	mult = 1

	mult = mult * no1

*/
#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Power(int iNo1,int iNo2) //2 4
{
	ULONG lMult = 1;
	register int iCnt = 0;
	//		1 			2			3
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		lMult = lMult * iNo1;	//4
	}
	return lMult;
}

int main()
{
	auto int iValue1 = 0, iValue2 = 0;
	auto ULONG lRet = 0;

	printf("Enter Base\n");
	scanf("%d",&iValue1);

	printf("Enter power\n");
	scanf("%d",&iValue2);

	lRet=Power(iValue1,iValue2); //Power(2,4)
	printf("Result is: %ld\n",lRet);

	return 0;
}