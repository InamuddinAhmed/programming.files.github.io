#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int search,number,c;
	cout<<"Enter the number of elements in array :";
	cin>>number;
	int array[number];
	cout<<"Enter "<<number<<" numbers:"<<endl;
	for(c=0;c<number;c++)
		cin>>array[c];
	cout<<"Enter the number to search :";
	cin>>search;
	for(c=0;c<number;c++)
	{
		if(array[c]==search)
		{
			cout<<search<<" is present at location "<<c+1;
			break;
		}
	}
	if(c==number)
		cout<<search<<" is not present in array.";
    getch();
	return 0;
}