#include<iostream>
#include<conio.h>
#define size 10
using namespace std;

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
    cout<<"\nThe delete item is "<<item;
    return Q.front;
}
void display()
{
    int i;
    for(i=Q.front;i<=Q.rear;i++)
        cout<<Q.que[i]<<" ";
}
int main()
{
    int item,ch;
    Q.front=-1;
    Q.rear=-1;
    do
    {
        system("cls");
        cout<<"\nQueue Implementation";
        cout<<"\n\nMain Menu";
        cout<<"\n 1: Push";
        cout<<"\n 2: Pop";
        cout<<"\n 3: Display";
        cout<<"\n 4: Exit";
        cout<<"\n Select Operation:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                if(queueFull())
                {
                    cout<<"\n Stack is Full (Overflow)";
                    getch();
                }
                else
                {
                    cout<<"\n Enter an item to insert:";
                    cin>>item;
                    insert_item(item);
                }
                break;
            case 2:
                if(queueEmpty())
                cout<<"\nQueue is Empty";
                else
                    delete_item();
                getch();
                break;
            case 3:
                if(queueEmpty())
                    cout<<"\nQueue is Empty";
                else
                    display();
                getch();
                break;
            case 4:
                cout<<"End of program...\n";
                break;
    
            default:
                cout<<"Please enter correct choice";
                getch();
                break;
        }
    }while(ch!=4);
    getch();
    return 0;
}