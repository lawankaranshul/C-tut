/******************************************************************************

Anshul Lawanakar
April 04 2022, Monday
08:00 PM
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int m, n, sum = 0;
  int a[3][4], b[4][2], result[3][2];
  //Entering 1st Matrix
  printf ("Enter your FIRST Matrix\n");
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 4; j++)
	{
	  //   printf("Enter %d %d element of FIRST Matrix\n",i,j);
	  scanf ("%d", &a[i][j]);
	  //   printf("\t");
	}
      // printf("\n");
    }
  //Entering 2nd Matrix
  printf ("Enter your SECOND Matrix\n");
  for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 2; j++)
	{
	  //   printf("Enter %d %d element of SECOND Matrix\n",i,j);
	  scanf ("%d", &b[i][j]);
	}
    }
  //Calculating result matrix
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 2; j++)
	{
	  for (int k = 0; k < 4; k++)
	    {
	      sum += a[i][k] * b[k][j];
	    }
	  result[i][j] = sum;
	  sum = 0;
	}
    }
  //Printing resultant matrix
  printf ("Printing Result Matrix\n");
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 2; j++)
	{
	  printf ("%d\t", result[i][j]);
	}
      printf ("\n");
    }

  return 0;
}
