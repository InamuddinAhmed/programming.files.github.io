#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,val,min,max=0;
 cout<<"Enter a number"<<endl;
 cin>>n;
 cout<<"\nEnter "<<n<<" numbers\n";
 cin>>val;
 if(val>=max)
  max=val;
 for(i=1;i<n;i++)
 {
  cin>>val;
  if(val>max)
   max=val;
  if(val<min)
   min=val;
 }
 cout<<"Maximum Value : "<<max<<endl;
 cout<<"Minimum Value : "<<min<<endl;
 getch();
 return 0;
}