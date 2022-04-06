/******************************************************************************

Anshul Lawankar
06 April 2022, Wednesday
11: 30 PM

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int
IsPalindrome (int num)
{
  int rev = 0;
  int original = num;
  while (num != 0)
    {
      rev = rev * 10 + num % 10;
      num = num / 10;
    }
  printf ("REVERSED number is : %d ", rev);
  if (original == rev)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}


int
main ()
{
  int num;
  printf ("******PALINDROME CHECKER*****\n");
  printf ("Enter a number:\t");
  scanf ("%d", &num);

  if (IsPalindrome (num))
    {
      printf ("\nThis number is a Palindrome");
    }
  else
    {
      printf ("\nThis number is NOT Palindrome");
    }

  return 0;
}
