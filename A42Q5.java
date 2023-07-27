//Write java program to accept directory name from user and display all names of files from that directory
import java.io.File;
import java.io.IOException;

public class A42Q5
{
    public static void main(String args[]) throws IOException 
    {
        File directoryPath = new File("C:\\Users\\prathamesh\\OneDrive\\Desktop\\Programs\\MarvellousInfosystems\\LB Assignment");
        String contents[] = directoryPath.list();
        System.out.println("List of files and directories in the specified directory:");
        for (int i = 0; i < contents.length; i++) {
            System.out.println(contents[i]);
        }
    }
}