import java.lang.*;
import java.util.*;
import java.io.*;

class program240
{
	public static void main(String arg[])
	{
		try
		{
			Scanner sobj = new Scanner(System.in);
		
			System.out.println("Please enter file name");
			String Filename = sobj.nextLine();	

			File fobj = new File(Filename);

			boolean bobj = fobj.createNewFile();

			if(bobj == true)
			{
				System.out.println("File is successfully creted");
			}
			else
			{
				System.out.println("File is alredy existing");
			}
			System.out.println(Filename);
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}