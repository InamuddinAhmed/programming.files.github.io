import java.util.*;
public class QuadEquation
{
    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        double root1,root2,imaginaryPart;
        System.out.print("Enter values of a, b and c:\n");
        double a=sc.nextDouble();
        double b=sc.nextDouble();
        double c=sc.nextDouble();
        double determinant=b*b-4*a*c;
        double real=-b/(2*a);
        if(determinant>0)
        {
            root1=real+Math.sqrt(determinant)/(2*a);
            root2=real-Math.sqrt(determinant)/(2*a);
            System.out.print("\nroot1="+root1+"\nroot2"+root2);
        }
        else if(determinant==0)
        {
            root1=root2=real;
            System.out.print("\nroot1=root2"+root1);
        }
        else
        {
            imaginaryPart=Math.sqrt(-determinant)/(2*a);
            System.out.print("\nroot1="+(real+imaginaryPart)+"\nroot2="+(real-imaginaryPart));
        }
    }
}