#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,real,determinant,root1,root2,imaginaryPart;
    cout<<("Enter values of a, b and c:\n");
    cin>>a>>b>>c;
    determinant=b*b-4*a*c;
    real=-b/(2*a);
    if(determinant>0)
    {
        root1=real+sqrt(determinant)/(2*a);
        root2=real-sqrt(determinant)/(2*a);
        cout<<"\nroot1="<<root1<<"\nroot2"<<root2;
    }
    else if(determinant==0)
    {
        root1=root2=real;
        cout<<"\nroot1=root2"<<root1;
    }
    else
    {
        imaginaryPart=sqrt(-determinant)/(2*a);
        cout<<"\nroot1="<<(real+imaginaryPart)<<"\nroot2="<<(real-imaginaryPart);
    }
    getch();
    return 0;
}