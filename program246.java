import java.lang.*;
import java.util.*;
import java.io.*;

class program246
{
    public static void main(String arg[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Please enter Directory / Folder name");
            String Foldername = sobj.nextLine();

            File dobj = new File(Foldername);

            File allfiles[] = dobj.listFiles();
            String name;

            for(int i = 0; i < allfiles.length; i++)
            {
                name = allfiles[i].getName();
                if(name.endsWith(".txt"))
                {
                    System.out.println(name);
                }
            }
        }  
        catch(Exception obj)
        {
            System.out.println(obj);
        }
    }
} 