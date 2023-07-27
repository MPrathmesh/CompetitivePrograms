//Write a java program to accept name from user and create that directory.
import java.io.*;

public class A43Q3 {

    public static void main(String args[])
    {
        File f = new File("Directory");

        if (f.mkdir()) 
        {
            System.out.println("Directory is created");
        }
        else 
        {
            System.out.println("Directory cannot be created");
        }
    }
}
