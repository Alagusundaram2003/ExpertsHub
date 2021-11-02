#include<stdio.h>
#include<conio.h>
int array[5]={1,2,3,4,5};
int y=0;
void main()
{
  clrscr();
	   for(y=0;y<=4;y++)
	 {
	   printf("enter the value for a[%d]",y);
	   scanf("%d",&array[y]);
	 }

  getch();
}

