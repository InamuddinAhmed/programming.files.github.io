#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,val,min,max=0;
	printf("Enter how many number you want to enter :");
	scanf("%d",&n);
	printf("Enter the %d numbers.\n",n);
	scanf("%d",&val);
	min=val;
	if(val>=max)
		max=val;
	for(i=1;i<n;i++)
	{
		scanf("%d",&val);
		if(val>max)
			max=val;
		if(val<min)
			min=val;
	}
	printf("The maximum of given %d numbers is %d",n,max);
	printf("\n\n");
	printf("The manimum of given %d numbers is %d",n,min);
	getch();
}