#include<stdio.h>
#include<conio.h>

void main()
{
   clrscr();
   int a=15,b=25,c=30;
   if(a>b)
   {
   if(a>c)
    {
      printf("A is maximum");
    }
   else
    {
     printf("c is maximum");
    }
   }
   else
   {
    if (b>c)
    {
     printf("B is maximum");
    }
    else
    {
     printf("C is maximum");
    }
  }
  getch();
}




