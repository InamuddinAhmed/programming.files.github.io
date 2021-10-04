#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
struct queue
{
    int que[size];
    int front,rear;
}Q;
int queueFull()
{
    if(Q.rear>=size-1)
        return 1;
    else
        return 0;
}
int queueEmpty()
{
    if((Q.front==-1)||(Q.front>Q.rear))
        return 1;
    else
        return 0;
}
int insert_item(int item)
{
    if(Q.front==-1)
        Q.front++;
    Q.que[++Q.rear]=item;
    return Q.rear;
}
int delete_item()
{
    int item;
    item=Q.que[Q.front];
    Q.front++;
    printf("\nThe delete item is %d",item);
    return Q.front;
}
void display()
{
    int i;
    for(i=Q.front;i<=Q.rear;i++)
    printf("%d ",Q.que[i]);
}

void main()
{
    int item,ch;
    Q.front=-1;
    Q.rear=-1;
    do
    {
        system("cls");
        printf("\nQueue Implementation");
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
                if(queueFull())
                {
                    printf("\nCannot insert more elements");
                    getch();
                }
                else
                {
                    printf("\n Enter the item to be pushed:");
                    scanf("%d",&item);
                    insert_item(item);
                }
                break;
            case 2:
                if(queueEmpty())
                    printf("\nQueue is Empty");
                else
                    delete_item();
                getch();
                break;
            case 3:
                if(queueEmpty())
                    printf("\nQueue is Empty");
                else
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