#include<iostream>
#include<conio.h>
using namespace std;

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
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    getch();
    return 0;
}