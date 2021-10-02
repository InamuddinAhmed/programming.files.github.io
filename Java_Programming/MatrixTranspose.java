import java.util.Scanner;
public class MatrixTranspose
{
 public static void main(String []args)
 {
  Scanner sc=new Scanner(System.in);
  int A[][]=new int[3][3];
  int T[][]=new int[3][3];
  int i,j;
  System.out.println("Enter value of matrix");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    A[i][j]=sc.nextInt();
  }
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    T[i][j]=A[j][i];
  }
  System.out.println("Transpose is");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    System.out.print(T[i][j]+" ");
   System.out.println("");
  }
 }
}