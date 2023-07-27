//Problems on Bitwise in java
import java.lang.*;
import java.util.*;

class program299
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number");
		int iNo = sobj.nextInt();

		int iMask = 0xf000000f;
		int iResult = 0;

		iResult = iNo & iMask;

		if(iResult == iMask)
		{
			System.out.println("First nibble and last nibble is completly on");
		}
		else
		{
			System.out.println("First nibble and last nibble is off");
		}
	}
}