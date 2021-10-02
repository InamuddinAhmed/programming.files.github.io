#include<stdio.h>
#include<conio.h>
#include<math.h>
float determinant(float [][10],float);
void cofactor(float [][10],float);
void transpose(float [][10],float [][10],float);

void main()
{
    float a[10][10],k,d;
    int i,j;
    printf("Enter order of the matrix:\n");
    scanf("%f",&k);
    printf("Enter the element of %.0fX%.0f Matrix\n",k,k);
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    d=determinant(a,k);
    printf("THE DETERMINANT IS %.2f\n",d);
    if(d==0)
        printf("Inverse of Entered Matrix is not possible");
    else
        cofactor(a,k);
    getch();
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
            m=0,n=0;
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
    printf("THE INVERSE OF THE MATRIX IS :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("\t%.2f ",inverse[i][j]);
        }
        printf("\n");
    }
}