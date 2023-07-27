//Write a program which accept matrix and display transpose of the matrix.
//The transpose of a given matrix is formed by interchanging the rows & colums of a matrix.
import java.lang.*;
import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a, int b)
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

     public void Transpose()
     {
        int iTranspose[][] = new int[iRow][iCol];

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                iTranspose[i][j] = Arr[j][i];
            }
        }

        System.out.println("Printing Matrix after transpose: ");
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(iTranspose[i][j]+" ");
            }
            System.out.println();
        }
     }
}

class A46Q1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of row");
        int X = sobj.nextInt();

        System.out.println("Enter the number of colums");
        int Y = sobj.nextInt();

        Matrix mobj = new Matrix(X,Y);
        mobj.Accept();
        mobj.Display();

        mobj.Transpose();
    }
}