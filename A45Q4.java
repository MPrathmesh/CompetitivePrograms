//Write a program which accept matrix and display addition of elements from each column
import java.lang.*;
import java.util.*;

class AddColums
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public AddColums(int a, int b)
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

    public void SumCol()
    {
        for(int i = 0; i < iCol; i++)
        {
            int cSum = 0;
            for(int j = 0; j < iRow; j++)
            {
                cSum = cSum + Arr[j][i];
            }
            System.out.println("Colums " + (i + 1) + " sum = " + cSum);
        }
    }
}

class A45Q4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of row");
        int X = sobj.nextInt();

        System.out.println("Enter the number of colums");
        int Y = sobj.nextInt();

        AddColums cobj = new AddColums(X,Y);
        cobj.Accept();
        cobj.Display();

        cobj.SumCol();
    }
}