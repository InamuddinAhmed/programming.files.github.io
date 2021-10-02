#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int A[3][3],B[3][3],C[3][3];
 int i,j;
 cout<<"Enter value of 1st matrix\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   cin>>A[i][j];
 }
 cout<<"Enter value of 2nd matrix\n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   cin>>B[i][j];
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   C[i][j]=0;
   for(int k=0;k<3;k++)
    C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
  }
 }
 cout<<"Multiplication is \n";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   cout<<C[i][j]<<" ";
  cout<<"\n";
 }
 getch();
 return 0;
}