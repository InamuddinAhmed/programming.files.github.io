#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;;
}*start;
int insertEnd(int num)
{
 struct node *temp,*right;
 temp=(struct node *)malloc(sizeof(struct node));
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
 temp=(struct node *)malloc(sizeof(struct node));
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
 temp=(struct node *)malloc(sizeof(struct node));
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
  printf("\n Deleted number is %d",temp->data);
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
  printf("\n Deleted number is %d",temp->data);
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
  printf("\n Deleted number is %d",temp->data);
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
  printf("%d ",r->data);
  r=r->next;
 }
 printf("\n");
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
 
 printf("\nLinked List");
 printf("\n\nMain Menu");
 printf("\n 1: Insert at beginning.");
 printf("\n 2: Insert at end.");
 printf("\n 3: Insert at specific position.");
 printf("\n 4: Delete from beginning.");
 printf("\n 5: Delete from end.");
 printf("\n 6: Delete from specific position.");
 printf("\n 7. Display");
 printf("\n 8. Size");
 printf("\n 9. Exit");
 printf("\n Select Operation: ");
 scanf("%d",&ch);
 return ch;
}

void main()
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
    printf("\n Enter the element to insert: ");
    scanf("%d",&num);
    insertBegin(num);
    break;
    case 2:
    printf("\n Enter the element to insert: ");
    scanf("%d",&num);
    insertEnd(num);
    break;
    case 3:
    printf("\n Enter the element to insert: ");
    scanf("%d",&num);
    printf("\n Enter the position to insert: ");
    scanf("%d",&pos);
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
      printf("List is Empty.");
     else
     {
      printf("Enter the number to delete: ");
      scanf("%d",&num);
      if(delete_item(num))
       printf("\n %d is deleted successfully",num);
      else
       printf("\n %d is not found in the list",num);
     }
     getch();
     break;
     
    case 7:
     if(start==NULL)
      printf("List is Empty.");
     else
     {
      printf("Element(s) in the list are: ");
      display(n);
     }
     getch();
     break;
    
    case 8:
     printf("\n Size of the list is %d",size_counter());
     getch();
     break;
    
    case 9:
     printf("End of program...\n");
     break;
    
    default:
     printf("Please enter correct choice");
     getch();
     break;
  }
 }while(ch!=9);
 getch();
}
