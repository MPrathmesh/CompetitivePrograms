//Problems on Bitwise in java
import java.lang.*;
import java.util.*;

class program298
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number");
		int iNo = sobj.nextInt();

		int iMask = 0x0000000f;
		int iResult = 0;

		iResult = iNo & iMask;

		if(iResult == iMask)
		{
			System.out.println("First nibble is completly on");
		}
		else
		{
			System.out.println("First nibble is off");
		}
	}
}