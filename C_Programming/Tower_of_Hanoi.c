#include<stdio.h>
#include<conio.h>
void hanoi(int n,char initial,char final,char temp)
{
	if(n==1)
	{
		printf("move disk 1 from peg %c to %c \n",initial,final);
		return;
	}
}
void main()
{
	int n;
	printf("Enter number of disks to be moved :");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	getch();
}
