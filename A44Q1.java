//Write java program to accept directory name from user an display all names of files from that directory which are regular file.
import java.io.File;
import java.io.IOException;

public class A44Q1
{
    public static void main(String args[]) throws IOException 
    {
        File directoryPath = new File("Directory");
        String contents[] = directoryPath.list();
        System.out.println("List of files and directories in the specified directory:");
        for (int i = 0; i < contents.length; i++) {
            if (directoryPath.isFile()) 
            {
                System.out.println("File is a regular file.");
            } else 
            {
                System.out.println("File denoted by this pathname not exists or is not a regular file.");
            }
        }
    }
}