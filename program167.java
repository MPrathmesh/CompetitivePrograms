//Accept number and on the 4th bit if it is off.
import java.lang.*;
import java.util.*;
//0000 0100 0000 0000 0000 0000 0000 0000
//0      4    0    0    0   0     0    0   
class Bitwise
{
	public int OnBit(int iNo)
	{
		int iMask = 0X04000000;	//
		int iResult = 0;

		iResult = iNo | iMask;
		return iResult;
	}	
}

class program167
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
