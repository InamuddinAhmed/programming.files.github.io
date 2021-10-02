import java.util.Scanner;
public class Main
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        float a[][]=new float[10][10];
        int i,j;
        System.out.println("Enter the order of matrix");
        float k=sc.nextFloat();
        System.out.println("Enter value of "+k+"X"+k+" Matrix");
        for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        float d=determinant(a,k);
        System.out.println("THE DETERMINANT IS "+d);
        if(d==0)
            System.out.println("Inverse of Entered Matrix is not possible");
        else
            cofactor(a,k);
    }
    public static float determinant(float[][] a,float k)
    {
        float s=1F,det=0F;
        float[][] b=new float[10][10];
        if(k==1)
            return (a[0][0]);
        else
        {
            det=0;
            for(int c=0;c<k;c++)
            {
                int m=0,n=0;
                for(int i=0;i<k;i++)
                {
                    for(int j=0;j<k;j++)
                    {
                        b[i][j]=0;
                        if(i!=0 && j!=c)
                        {
                            b[m][n]=a[i][j];
                            if(n<(k-2))
                                n++;
                            else
                            {
                                n=0;
                                m++;
                            }
                        }
                    }
                }
                det=det + s * (a[0][c] * determinant(b,k - 1));
                s=-1 * s;
            }
        }
        return(det);
    }
    public static void cofactor(float[][] num,float f)
    {
        float[][] b=new float[10][10];
        float[][] fac=new float[10][10];
        for(int q=0;q<f;q++)
        {
            for(int p=0;p<f;p++)
            {
                int n=0,m=0;
                for(int i=0;i<f;i++)
                {
                    for(int j=0;j<f;j++)
                    {
                        if(i!=q && j!=p)
                        {
                            b[m][n]=num[i][j];
                            if(n<(f-2))
                                n++;
                            else
                            {
                                n=0;
                                m++;
                            }
                        }
                    }
                }
                fac[q][p]=(float)(Math.pow(-1,q + p) * determinant(b, f - 1));
            }
        }
        transpose(num,fac,f);
    }
    public static void transpose(float[][] num,float[][] fac,float r)
    {
        float[][] b=new float[10][10];
        float[][] inverse=new float[10][10];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                b[i][j]=fac[j][i];
            }
        }
        float d=determinant(num,r);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                inverse[i][j]=b[i][j]/d;
            }
        }
        System.out.println("THE INVERSE OF THE MATRIX IS :\n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                System.out.print("  "+inverse[i][j]+"   ");
            }
            System.out.print("\n");
        }
    }
}