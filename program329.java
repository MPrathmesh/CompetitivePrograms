//Searching and Sorting
//For Insertion sort
import java.lang.*;
import java.util.*;

interface MarvellousSort
{
	public void Accept();
	public void Display();
	public void BubbleSort();
	public void InsertionSort();
	public void SelectionSort();
}

class Array implements MarvellousSort
{
	public int Arr[];

	public Array(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter elements");
		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}

	public void Display()
	{
		System.out.println("Enter of the array are");
		for(int i = 0; i < Arr.length; i++)
		{
			System.out.print(Arr[i]+" ");
		}
		System.out.println();
	}

	public void BubbleSort()
	{
		int i = 0, j = 0, temp = 0;
		boolean Swap = false;

		for(i = 0; i < Arr.length; i++)
		{
			Swap = false;
			for(j = 0; j < Arr.length-i-1; j++)
			{
				if(Arr[j] > Arr[j + 1])
				{
					temp = Arr[j];
					Arr[j] = Arr[j + 1];
					Arr[j + 1] = temp;
					Swap = true;
				}
			}
			System.out.println("Pass: "+ (i + 1)); //for pratcice
			Display();  //for practice
			if(Swap == false)
			{
				break;
			}
		}
	}

	public void InsertionSort()
	{
		int i = 0, j = 0,selected = 0;

		for(i = 1; i < Arr.length; i++)//1
		{
			for(j = i-1, selected = Arr[i]; (j >= 0) && (Arr[j] > selected); j--) //2
			{
				Arr[j+1] = Arr[j];
			}
			Arr[j+1] = selected;
		}		

	}

	public void SelectionSort()
	{}
}

class program329
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the size of array");
		int size = sobj.nextInt();

		Array aobj = new Array(size);
		aobj.Accept();
		aobj.Display();

		/*aobj.BubbleSort();
		System.out.println("Data after sorting");
		aobj.Display();
		*/
		aobj.InsertionSort();
		System.out.println("Data after sorting");
		aobj.Display();
	}
}