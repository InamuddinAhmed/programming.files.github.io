#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
struct stack
{
    int s[size];
    int top;
}st;
int stackFull()
{
    if(st.top>=size-1)
        return 1;
    else
        return 0;
}

int stackEmpty()
{
    if(st.top==-1)
        return 1;
    else
        return 0;
}

void push(int item)
{
    st.top++;
    st.s[st.top]=item;
}

int pop()
{
    int item;
    item=st.s[st.top];
    st.top--;
        return(item);
}

void display()
{
    int i;
    if(stackEmpty())
        printf("\n Stack is Empty!");
    else
        {
            printf("\nElements of Stack:");
            for(i=st.top;i>=0;i--)
                printf("\n  %d",st.s[i]);
        }
}


void main()
{
    int item,ch;
    st.top=-1;
    do
    {
        system("cls");
        printf("\nStack Implementation");
        printf("\n\nMain Menu");
        printf("\n 1: Push");
        printf("\n 2: Pop");
        printf("\n 3: Display");
        printf("\n 4: Exit");

        printf("\n Select Operation:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\n Enter the item to be pushed:");
                scanf("%d",&item);

                if(stackFull())
                {
                    printf("\n Stack is Full (Overflow)");
                    getch();
                }
                else
                    push(item);
                break;

            case 2:
                if(stackEmpty())
                    printf("\n Stack is Empty (Underflow)");
                else
                {
                    item=pop();
                    printf("\n The poped element is %d",item);
                }
                getch();
                break;

            case 3:
                display();
                getch();
                break;

            case 4:
                printf("End of program...\n");
                break;
    
            default:
                printf("Please enter correct choice");
                getch();
                break;
        }
    }while(ch!=4);
    getch();
}