#include<stdio.h>
#include<conio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3];
    int i,j;
    printf("Enter value of 1st matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&A[i][j]);
    }
    printf("Enter value of 2nd matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&B[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            C[i][j]=A[i][j]+B[i][j];
    }
    printf("Sum is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    getch();
}