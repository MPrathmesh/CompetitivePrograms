//Write java program to accept file name from user and check whether that file is regular file or not.
import java.io.File;
import java.io.IOException;

public class A43Q2 
{
    public static void main(String[] args) throws IOException 
    {
        File file = new File("Demo.txt");

        if (file.isFile()) 
        {
            System.out.println("File is a regular file.");
        } else 
        {
            System.out.println("File denoted by this pathname not exists or is not a regular file.");
        }
    }
}
