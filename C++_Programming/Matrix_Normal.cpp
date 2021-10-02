#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float determinant(float [][10],float);
void cofactor(float [][10],float);
void transpose(float [][10],float [][10],float);

int main()
{
    float a[10][10],k,d;
    int i,j;
    cout<<"Enter order of the matrix:"<<endl;
    cin>>k;
    cout<<"Enter the element of "<<k<<"X"<<k<<" Matrix"<<endl;
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            cin>>a[i][j];
        }
    }
    d=determinant(a,k);
    cout<<"THE DETERMINANT IS "<<d<<endl;
    if(d==0)
        cout<<"Inverse of Entered Matrix is not possible";
    else
        cofactor(a,k);
    getch();
    return 0;
}
float determinant(float a[10][10],float k)
{
    float s=1,det,b[10][10];
    int i,j,m,n,c;
    if(k==1)
        return (a[0][0]);
    else
    {
        det=0;
        for(c=0;c<k;c++)
        {
            m=0;n=0;
            for(i=0;i<k;i++)
            {
                for(j=0;j<k;j++)
                {
                    b[i][j]=0;
                    if(i!=0 && j!=c)
                    {
                        b[m][n]=a[i][j];
                        if(n<(k-2))
                            n++;
                        else
                        {
                            n=0;
                            m++;
                        }
                    }
                }
            }
            det=det + s * (a[0][c] * determinant(b,k - 1));
            s=-1 * s;
        }
    }
    return(det);
}
void cofactor(float num[10][10],float f)
{
    float b[10][10],fac[10][10];
    int p,q,m,n,i,j;
    for(q=0;q<f;q++)
    {
        for(p=0;p<f;p++)
        {
            m=0;n=0;
            for(i=0;i<f;i++)
            {
                for(j=0;j<f;j++)
                {
                    if(i!=q && j!=p)
                    {
                        b[m][n]=num[i][j];
                        if(n<(f-2))
                            n++;
                        else
                        {
                            n=0;
                            m++;
                        }
                    }
                }
            }
            fac[q][p]=pow(-1,q + p) * determinant(b, f - 1);
        }
    }
    transpose(num,fac,f);
}
void transpose(float num[10][10],float fac[10][10],float r)
{
    int i,j;
    float b[10][10],inverse[10][10],d;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            b[i][j]=fac[j][i];
        }
    }
    d=determinant(num,r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            inverse[i][j]=b[i][j]/d;
        }
    }
    cout<<"THE INVERSE OF THE MATRIX IS :"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<"  "<<inverse[i][j]<<"  ";
        }
        cout<<endl;
    }
}