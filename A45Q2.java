//Write a program which accept matrix and one number from user and return frequency of that number.
import java.lang.*;
import java.util.*;

class Frequency
{
    public int iRow = 0;
    public int iCol = 0;
    public int iNo = 0;
    public int Arr[][]; 

    public Frequency(int a, int b, int c)
    {
        this.iRow = a;
        this.iCol = b;
        this.iNo = c;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Data");
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

    public int Frequency()
    {
        int iFrequency = 0;
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(iNo == Arr[i][j])
                {
                    iFrequency++;
                }
            }
        }
        return iFrequency;
    }
}

class A45Q2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of row");
        int X = sobj.nextInt();

        System.out.println("Enter the number of colum");
        int Y = sobj.nextInt();

        System.out.println("Enter the number for Checking Frequency");
        int Z = sobj.nextInt();

        Frequency fobj = new Frequency(X,Y,Z);

        fobj.Accept();
        fobj.Display();

        int iRet = fobj.Frequency();
        System.out.println("Frequency is: "+iRet);
    }
}