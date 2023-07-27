import java.lang.*;
import java.util.*;

//Input : Hello
/*
    h
    He
    Hel
    Hell
    Hello
*/
class program290
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+" ");
            }
            System.out.println();
        }
    }
}