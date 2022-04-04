/******************************************************************************

04 April 2022
12 30 PM
Monday

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int genrandom(int n)
 {
     srand(time(NULL));
     return rand()%n;
 }
int greater(char c1, char c2)
{
   if(c1==c2)
   {
       return -1;
   }
   if((c1=='r')&&(c2=='s'))
   {
       return 1;
   }
   else if((c2=='r')&&(c1=='s'))
   {
      return 0;  
   }
   if((c1=='s')&&(c2=='p'))
   {
       return 1;
   }
   else if((c2=='s')&&(c1=='p'))
   {
      return 0;  
   }
   if((c1=='p')&&(c2=='r'))
   {
       return 1;
   }
   else if ((c2=='p')&&(c1=='r'))
   {
      return 0;  
   }
}

int main()
{
    int pscore=0, cscore=0,temp;
    char pChar, cChar;
    char dict[]={'r', 'p', 's'};
    printf("Welcome to ROCK, PAPER, SCISSORS.\n");
    printf("Choose 1 for ROCK\nChoose 2 for PAPER\nChoose 3 for SCISSORS\n");
    for(int i =0; i<3;i++)
    {
      printf("Player 1's turn\n");
      scanf("%d",&temp);
      getchar();
      pChar= dict[temp -1];
      printf("You choose %c\n",pChar);
      
    //   printf("Computer's Turn\n");
      temp= genrandom(3) +1;
      cChar= dict[temp -1];
      printf("Computer choose %c\n",cChar);
      if(greater(cChar,pChar)==1)
      {
          cscore +=1;
          printf("CPU WON THIS ROUND\n");
      }
      else if ((greater(cChar,pChar)==-1))
      {
        //   cscore += 1;
        //   pscore += 1;
          printf("DRAW!!!!!!!!!!\n");
      }
      else
      {
          pscore +=1 ;
          printf("YOU WON THIS ROUND\n");
      }
      
    }
    printf("Your score:%d\nCPU sccore:%d\n",pscore,cscore);
    if(cscore>pscore)
    {
        printf("COMPUTER WON");
    }
    else if ( pscore==cscore)
    {
        printf("DRAW");
    }
    else 
    {
        printf("YOU WON");
    }
    return 0;
}
