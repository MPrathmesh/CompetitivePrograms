//Accept number and toggle 4th bit and 7th bit.
import java.lang.*;
import java.util.*;
//0000 0000 0000 0000 0000 0000 0100 1000
//0      0    0    0    0   0     4    8  
class Bitwise
{
	public int OnBit(int iNo)
	{
		int iMask = 0X00000048;	//
		int iResult = 0;

		iResult = iNo ^ iMask;
		return iResult;
	}	
}

class program169
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter number");
		int value = sobj.nextInt();

		Bitwise bobj = new Bitwise();
		int iret = bobj.OnBit(value);
		System.out.println("Updated number is: "+iret);
	}
}
