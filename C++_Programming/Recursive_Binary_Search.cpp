#include<iostream>
#include<conio.h>
using namespace std;
int search(int a[],int n,int m,int l,int u)
{
	int mid,c=0;
	if(l<=u)
	{
		mid=(l+u)/2;
		if(m==a[mid])
			c=1;
		else if(m<a[mid])
			return search(a,n,m,l,mid-1);
		else
			return search(a,n,m,mid+1,u);
	}
	else
		return c;
}
int main()
{
	int n,m;
	cout<<"Enter the size of an array :";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array."<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the number to be search :";
	cin>>m;
	int c,l=0,u=n-1;
	c=search(a,n,m,l,u);
	if(c==0)
		cout<<"Number is not found.";
	else
		cout<<"Number is found.";
    getch();
	return 0;
}
