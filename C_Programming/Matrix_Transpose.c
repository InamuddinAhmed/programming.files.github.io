#include<stdio.h>
#include<conio.h>
void main()
{
    int A[3][3],T[3][3];
    int i,j;
    printf("Enter value of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            T[i][j]=A[j][i];
    }
    printf("Transpose is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",T[i][j]);
        printf("\n");
    }
    getch();
}