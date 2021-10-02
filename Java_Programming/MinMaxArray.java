import java.util.Scanner;
public class MinMax_Array
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of elements in Array :");
		int n=sc.nextInt();
		int arr[]=new int[n];
		System.out.println("Enter the elements of the array.\n");
		for(int i=0;i<n;i++)
			arr[i]=sc.nextInt();
		int max=arr[0];
		int min=arr[0];
		for(int i=1;i<n;i++)
		{
			if(max<arr[i])
				max=arr[i];
			if(min>arr[i])
				min=arr[i];
		}
		System.out.println("The largest (MAX) element of the array is "+max);
		System.out.println("The smallest (MIN) element of the array is "+min);
	}
}