#include<stdio.h>
#include<conio.h>
void main()
{
  int poori,ragul,sanjay,eatr,eats,eatn,naveena;
  clrscr();
  scanf("%d",&poori);
  printf("total number of poori;%d\n",poori);

  scanf("%d",&ragul);
  printf("enter the number of poori ragul eats in percentage %d%",ragul);
  eatr=poori*ragul/100;
  printf("\ntotal number of poori ragul eats: %d\n",eatr);

  scanf("%d",&sanjay);
  printf("enter the number of poori sanjay eats in percentage %d%",sanjay);
  eats=poori*sanjay/100;
  printf("\ntotal number of poori sanjay eats: %d\n",eats);

  poori=poori-eatr-eats;
  printf("balance ragul and sanjay eats total poori:%d\n",poori);

  scanf("%d",&naveena);
  printf("enter the number of poori naveena eats in percentage %d%",naveena);
  eatn=poori*naveena/100;
  printf("\ntotal number of poori naveena eats: %d\n",eatn);

  poori=poori-eatn;
  printf("balance poori of naveena eats :%d\n",poori);

  getch();
}
