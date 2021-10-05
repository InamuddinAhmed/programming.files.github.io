/*
Given two first names of two persons, please calculate name proximity score. Name proximity score is calculated as follows:

• if a letter occurs in the same position in both names, the score Increments by two. • If a letter occurs in both names, but in different positions, the score is incremented by 1.
• Once a letter in a position is used for comparison it cannot be considered again. However, if the same letter occurs in another
position, it can be used.

input. The first line contains the first name & the second line contains the second name Output: Only an integer value, showing the name proximity score

Sample test case:

Input:

Amitabi

Ajitabh

Output:

12

Input:

Ryaan

Nagesh

Output:

2
*/
#include <stdio.h>
#include <conio.h>
void stringChange(char *str)
{
   int i=0;
   while(str[i]!='\0')
   {
       if(str[i]>='A' && str[i]<='Z')
           str[i]=str[i] + 32;
       ++i;
   }
}
void main()
{
  int count=0,i,j;
  char fname1[1000],fname2[1000];
  scanf("%s",fname1);
  scanf("%s",fname2);
  stringChange(fname1);
  stringChange(fname2);
  for(i=0; fname1[i]!='\0'; i++)
  {
      for(j=0; fname2[j]!='\0'; j++)
      {
          if(fname2[i]!='0' && fname1[i]==fname2[j])
          {
              if(i==j)
                 count=count+2;
              else
                 count=count+1;
             fname2[j]='0';
          }
      }
  }
  printf("%d",count);
  getch();
}
