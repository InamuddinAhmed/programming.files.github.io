/*
Difficult Subject

The principal of the School has asked Sankey to create a tool which will analyze students score and identify subjects that students find difficult to crack. Below are scores of students for given subjects. Write a program that will take the below data and identify the subject that students find difficult to crack.
Sample Input:

Students                    English(60)     History(40)     Computers(50)   Mathematics(100)    Science(90)    Economics(80)

Subject's-(Max.Marks)           100             100             130             150                 100              100

Meera                           80              70              80              90                  80               60

Subodh Kunal                    90              70              60              90                  70               40

Soni                            60              60              65              80                  80               70

Richu                           50              90              62              80                  85               80

Irene                           40              60              64              70                  65               95

Vijay                           80              80              35              65                  50               85

The data in the above table is input to your program. Define your own way to take input in your program, write comments accordingly.

Sample Output:

Print name of a subject which is difficult to crack students.

Explanation:

No explanation is available as it is an analytical question. You need to come up with your own solution to get the required output,
*/
#include <stdio.h>
#include <conio.h>
void main() 
{
    int n,i,j,arr[10][10];
    int a=0,b=0,max=0;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i <n; i++)
    {
        for (j=0; j < n; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
                a=i;
                b=j;
            }
        }
    }
    getch();
}