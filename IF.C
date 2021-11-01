#include<stdio.h>
#include<conio.h>
int ragul1=1;
void main()
{
    while(ragul1)

  {
    clrscr();
	      printf("enter the status of ragul");
	      scanf("%d",&ragul1);
	      //condition checking
	      if (ragul1==0)
	      {
		 printf("ragul is sitting \n");
		// ragul=1;
		// getch();
		// continue;
	      }

	      else if (ragul1==1)
	      {
		 printf("ragul is standing \n");
		 //break;
	      }

	      else
	      {
		printf("ragul is death");
	      }
    getch();
    }
}