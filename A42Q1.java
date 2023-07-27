
//Wrirte java program to accept file name from user and open that file
import java.io.File;
import java.util.Scanner;
public class A42Q1 {
  public static void main(String[] args) {
    try {
      File file = new File("C:\\Users\\prathamesh\\OneDrive\\Desktop\\Programs\\MarvellousInfosystems\\LB Assignment\\demo.txt");
      Scanner sc = new Scanner(file);   
      System.out.println("The file content is:");
      while (sc.hasNextLine())
      
      System.out.println(sc.nextLine());
    }
    catch(Exception e) {
      e.printStackTrace();
    }
  }
}  

