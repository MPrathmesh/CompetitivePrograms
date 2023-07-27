import java.lang.*;
import java.util.*;

//Input : 7856
/*
   7 8 5 6
   7 8 5 6 
   7 8 5 6
   7 8 5 6
   7 8 5 6
*/
class program294
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        int no = sobj.nextInt();

        //String str = Integer.toString(no);
        char Arr[] = (Integer.toString(no)).toCharArray();
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                System.out.print(Arr[j]+" ");
            }
            System.out.println();
        }
    }
}