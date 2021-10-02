#include<stdio.h>
#include<conio.h>
long int factorial(int n)
{
    if(n<=1)
        return 1;
    else
    {
        n=n*factorial(n-1);
        return n;
    }
}
void main()
{
    int i,n,fac=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Factorial of %d is %ld",n,factorial(n));
    getch();
}