import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;

//Write java program to accept directory name from user and write names of all files from that directory into one newly created names as Marvellous.txt

public class A44Q2 {
    public static void main(String arg[]) throws IOException
    {
        File dir = new File("Directory");

        PrintWriter pw = new PrintWriter("Marvellous.txt");

        String[] fileNames = dir.list();

        for(String fileName : fileNames)
        {
            System.out.println("File Name "+fileName);

            File f = new File(dir, fileName);

            BufferedReader br = new BufferedReader(new FileReader(f));
            pw.println("Name of file "+fileName);
        
            br.close();
        } 
        pw.close();
    }    
}
