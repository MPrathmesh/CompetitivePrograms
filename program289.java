import java.lang.*;
import java.util.*;

//Input : Hello
/*
    H H H H 
    E E E E
    L L L L
    O O O O
*/
class program289
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                System.out.print(Arr[i]+" ");
            }
            System.out.println();
        }
    }
}