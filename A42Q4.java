//Write java program to accept file name from user and create new file of that name if it is not existing.
import java.io.File;
import java.io.IOException;

public class A42Q4 {

    public static void main(String[] args) throws IOException {

        File file = new File("Hello.txt");

        if (file.createNewFile()) {
            
            System.out.println("File has been created.");
        } else {
        
            System.out.println("File already exists.");
        }
    }
}