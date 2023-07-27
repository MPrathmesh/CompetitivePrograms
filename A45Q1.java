//Write a program which accept matrix from user and return addition od diagonal elements
import java.lang.*;
import java.util.*;

class Addition
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Addition(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the data : ");

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
        System.out.println("Elements of array are : ");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }

    public int AdditionDiagonal()
    {
        int Sum = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j =0; j < iCol; j++)
            {
                if(i == j)
                {
                    Sum = Sum + Arr[i][j]; 
                }
            }
        }
        return Sum;
    }
}

class A45Q1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        int X = sobj.nextInt();

        System.out.println("Enter number of colums");
        int Y = sobj.nextInt();

        Addition aobj = new Addition(X,Y);
        aobj.Accept();
        aobj.Display();

        int iRet = aobj.AdditionDiagonal();
        System.out.println("Addition od Diagonal is: "+iRet);
    }
}