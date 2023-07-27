//Write java program to accept file name from user and open that file in write mode and write some data at the end of file.
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

class A42Q3
{
	public static void main(String arg[])
	{
		PrintWriter pw = null;

        try
        {
            File file = new File("Demo.txt");
            FileWriter fw = new FileWriter(file, true);
            pw = new PrintWriter(fw);
            pw.println(" Kothrude Pune");
        }
        catch(IOException e)
        {
            e.printStackTrace();
        }
        finally
        {
            if(pw != null)
            {
                pw.close();
            }
        }
	}
}