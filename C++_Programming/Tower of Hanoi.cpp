#include<iostream>
#include<conio.h>
uaing namespace std;
void hanoi(int n,char initial,char final,char temp)
{
	if(n==1)
	{
		cout<<"move disk 1 from peg "<<initial<<" to "<<final<<endl;
		return;
	}
}
void main()
{
	int n;
	cout<<"Enter number of disks to be moved :";
	cin>>n;
	hanoi(n,'A','B','C');
}