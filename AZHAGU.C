#include<stdio.h>
#include<conio.h>



void main()
{
   int idly=100, dosa=50,tea=50,vadai=200;
   int aidly,adosa,atea,avadai;
   int sidly,sdosa,stea,svadai;
   clrscr();
   scanf("%d",&aidly);
   printf(" number of idlys ate:%d\n",aidly);
   idly=idly-aidly;
   getch();
   scanf("%d",&adosa);
   printf(" number of dosa ate:%d\n",adosa);
   dosa=dosa-adosa;
   getch();
   scanf("%d",&atea);

   printf(" number of tea ate:%d\n",atea);
   tea=tea-atea;
   getch();
   scanf("%d",&avadai);
   printf(" number of vadai ate:%d \n",avadai);
   vadai=vadai-avadai;
   getch();
   scanf("%d",&sidly);
   scanf("%d",&sdosa);
   scanf("%d",&stea);
   scanf("%d",&svadai);
   idly=idly-sidly;
   printf("balance of idly:%d\n",idly);
   printf("balance of dosa:%d\n",dosa);
   printf("balance of tea:%d\n",tea);
   printf("balance of vadai:%d\n",vadai);
   getch();
}






