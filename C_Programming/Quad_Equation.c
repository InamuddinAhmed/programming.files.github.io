#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double a,b,c,real,determinant,root1,root2,imaginaryPart;
    printf("Enter values of a, b and c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    determinant=b*b-4*a*c;
    real=-b/(2*a);
    if(determinant>0)
    {
        root1=real+sqrt(determinant)/(2*a);
        root2=real-sqrt(determinant)/(2*a);
        printf("\nroot1=%.2lf\nroot2=%.2lf",root1,root2);
    }
    else if(determinant==0)
    {
        root1=root2=real;
        printf("\nroot1=root2=%.2lf:",root1);
    }
    else
    {
        imaginaryPart=sqrt(-determinant)/(2*a);
        printf("\nroot1=%.2lf+%.2lfi \nroot2=%.2f-%.2fi",real,imaginaryPart,real,imaginaryPart);
    }
    getch();
}