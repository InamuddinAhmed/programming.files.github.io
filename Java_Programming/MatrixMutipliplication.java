import java.util.Scanner;
public class n
{
 public static void main(String []args)
 {
  Scanner sc=new Scanner(System.in);
  int A[][]=new int[3][3];
  int B[][]=new int[3][3];
  int C[][]=new int[3][3];
  int i,j;
  System.out.println("Enter value of 1st matrix");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    A[i][j]=sc.nextInt();
  }
  System.out.println("Enter value of 2nd matrix");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    B[i][j]=sc.nextInt();
  }
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
  {
   C[i][j]=0;
   for(int k=0;k<3;k++)
    C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
  }
  }
  System.out.println("Muliplication is");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    System.out.print(C[i][j]+" ");
   System.out.println("");
  }
 }
}