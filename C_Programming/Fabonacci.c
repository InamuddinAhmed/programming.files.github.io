#include<stdio.h>
#include<conio.h>
void main()
{
	int first_no=0;
	int second_no=1;
	int result,user_no,count=0;
	printf("Enter any number :\n");
	scanf("%d",&user_no);
	while(1)
	{
		result=first_no+second_no;
		count++;
		if(result>=user_no)
			break;
		first_no=second_no;
		second_no=result;
		printf("Fabonacci No. [%d]",result);
	}
	getch();
}