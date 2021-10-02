#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int A[3][3],T[3][3];
 int i,j;
 cout<<"Enter value of matrix\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   cin>>A[i][j];
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   T[i][j]=A[j][i];
 }
 cout<<"Tranpose is \n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   cout<<T[i][j]<<" ";
  cout<<"\n";
 }
 getch();
 return 0;
}