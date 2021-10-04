#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define size 10
using namespace std;
struct node
{
 int data;
 struct node *next;;
}*start;
int insertEnd(int num)
{
 struct node *temp,*right;
 temp = new node;
 temp->data=num;
 right=(struct node *)start;
 while(right->next!=NULL)
  right=right->next;
 right->next=temp;
 right=temp;
 right->next=NULL;
}
void insertBegin(int num)
{
 struct node *temp;
 temp = new node;
 temp->data=num;
 if(start==NULL)
 {
  start=temp;
  start->next=NULL;
 }
 else
 {
  temp->next=start;
  start=temp;
 }
}
void insertSepc(int num,int loc)
{
 int i;
 struct node *temp,*left, *right;
 right=start;
 if(loc<=1)
 {
  insertBegin(num);
  return;
 }
 for(i=1;i<loc;i++)
 {
  left=right;
  right=right->next;
  if(right==NULL)
  {
   insertEnd(num);
   return;
  }
 }
 temp = new node;
 temp->data=num;
 temp->next=left->next;
 left->next=temp;
}
int delete_start()
{
 struct node *temp;
 if(start==NULL)
  return 0;
 else
 {
  temp=start;
  start=start->next;
  cout<<"\n Deleted number is "<<temp->data;
  return 1;
 }
}
int delete_end()
{
 struct node *temp, *prev;
 if(start==NULL)
  return 0;
 else if(start->next==NULL)
 {
  temp=start;
  start=NULL;
  cout<<"\n Deleted number is "<<temp->data;
  return 1;
 }
 else
 {
  prev=start;
  temp=start->next;
  while(temp->next!=NULL)
  {
   prev=temp;
   temp=temp->next;
  }
  prev->next=NULL;
  cout<<"\n Deleted number is "<<temp->data;
  return 1;
 }
}
int delete_item(int num)
{
 struct node *temp, * prev;
 temp=start;
 while(temp!=NULL)
 {
  if(temp->data==num)
  {
   if(temp==start)
   {
    start=temp->next;
    free(temp);
    return 1;
   }
   else
   {
    prev->next=temp->next;
    free(temp);
    return 1;
   }
  }
  else
  {
   prev=temp;
   temp=temp->next;
  }
 }
 return 0;
}
void display(struct node *r)
{
 r=start;
 if(r==NULL)
  return;
 while(r!=NULL)
 {
  cout<<r->data<<" ";
  r=r->next;
 }
 cout<<"\n";
}
int size_counter()
{
 struct node *n;
 int i=0;
 n=start;
 while(n!=NULL)
 {
  n=n->next;
  i++;
 }
 return i;
}
int menu()
{
 int ch;
 cout<<"\nQueue Implementation";
 cout<<"\n\nMain Menu";
 cout<<"\n 1: Insert at beginning.";
 cout<<"\n 2: Insert at end.";
 cout<<"\n 3: Insert at specific position.";
 cout<<"\n 4: Delete from beginning.";
 cout<<"\n 5: Delete from end.";
 cout<<"\n 6: Delete from specific position.";
 cout<<"\n 7. Display";
 cout<<"\n 8. Size";
 cout<<"\n 9. Exit";
 cout<<"\n Select Operation:";
 cin>>ch;
 return ch;
}

int main()
{
 int ch,num,pos;
 struct node *n;
 start=NULL;
 
 do
 {
  system("cls");
  ch=menu();
  switch(ch)
  {
   case 1:
    cout<<"\n Enter the element to insert: ";
    cin>>num;
    insertBegin(num);
    break;
   case 2:
    cout<<"\n Enter the element to insert: ";
    cin>>num;
    insertEnd(num);
    break;
   case 3:
    cout<<"\n Enter the element to insert: ";
    cin>>num;
    cout<<"\n Enter the position to insert: ";
    cin>>pos;
    insertSepc(num,pos);
    break;
   case 4:
    delete_start();
    getch();
    break;
    
   case 5:
    delete_end();
    getch();
    break;
    
   case 6:
    if(start==NULL)
     cout<<"List is Empty.";
    else
    {
     cout<<"Enter the number to delete: ";
     cin>>num;
     if(delete_item(num))
      cout<<"\n %d is deleted successfully"<<num;
     else
      cout<<"\n %d is not found in the list"<<num;
    }
    getch();
    break;
    
   case 7:
    if(start==NULL)
     cout<<"List is Empty.";
    else
    {
     cout<<"Element(s) in the list are: ";
     display(n);
    }
    getch();
    break;
    
   case 8:
    cout<<"\n Size of the list is "<<size_counter();
    getch();
    break;
    
   case 9:
    cout<<"End of program...\n";
    getch();
    break;
    
   default:
    cout<<"Please enter correct choice";
    getch();
    break;
  }
 }while(ch!=9);
 getch();
 return 0;
}
