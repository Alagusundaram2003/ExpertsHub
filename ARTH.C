#include<stdio.h>
#include<conio.h>
void main()
{
   int no1,no2,out1,out2,out3,out4,out5;
   clrscr();
   printf("enter the input values :");
   scanf("%d%d",&no1,&no2);
  // printf("enter input 2");
   //scanf("%d",&no2);
   out1=no1+no2;
   out2=no1-no2;
   out3=no1*no2;
   out4=no1/no2;
   out5=no1%no2;
  // printf("sum of value are %d",out1);
   printf("sum of value are %d\n",out1);
   printf("sub of value are %d\n",out2);
   printf("mul of value are %d\n",out3);
   printf("div of value are %d\n",out4);
   printf("mod of value are %d\n",out5);

   getch();
}









