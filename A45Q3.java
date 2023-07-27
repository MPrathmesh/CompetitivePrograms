//Write a program which accept matrix and return largest number from both the diagonals
import java.lang.*;
import java.util.*;

class LargestDiagonal
{
    public int iRow = 0;
    public int iCol = 0;
    public int Arr[][];

    public LargestDiagonal(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    } 

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter data:-");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elments of array is:- ");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j <iCol; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }

    public int MaxDiagonal()
    {
        int i = 0,j = 0;
        int iMax1 = Arr[i][j];
        int iMax2 = Arr[i][j];

        for(i = 0; i < iRow; i++)
        {
            for(j =0; j < iCol; j++)
            {
                if(Arr[i][j] > iMax1)
                {
                    iMax1 = Arr[i][j]; 
                }
            }
        }
        for(i = 0; i < iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                if(Arr[i][j] > iMax2)
                {
                    iMax2 = Arr[i][j]; 
                }   
            }
        }

        if(iMax1 > iMax2)
        {
            return iMax1;
        }   
        else
        {
            return iMax2;
        } 
    }
}

class A45Q3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of row");
        int X = sobj.nextInt();

        System.out.println("Enter the number of colums");
        int Y = sobj.nextInt();

        LargestDiagonal lobj = new LargestDiagonal(X,Y);
        lobj.Accept();
        lobj.Display();

        int iRet = lobj.MaxDiagonal();
        System.out.println("Maximum Diagonal Number is: "+iRet);
    }
}