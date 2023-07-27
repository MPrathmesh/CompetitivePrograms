//Write a program which checks whether 15th bit is ON or Off
import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask = 16384;
		int iResult = 0;

		iResult = iNo & iMask;

		if(iResult == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}	
}

class A29Q1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter number");
		int value = sobj.nextInt();

		Bitwise bobj = new Bitwise();
		boolean bret = bobj.CheckBit(value);

		if(bret == true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
	}
}
