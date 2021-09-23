/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main (void)
{
  int t;
  scanf ("%d", &t);

  while (t > 0)
    {
      int n;
      scanf ("%d", &n);

      int count = 0;
      int arr[n];

      do
	{
	  scanf ("%d", &arr[count++]);
	}
      while (getchar () != '\n' && count < n);

      int c = 0, s = 0;
      for (int i = 0; i < n - 1; i++)
	{
	  int min = i;
	  int temp;
	  s++;
	  for (int j = i + 1; j < n; j++)
	    {
	      c++;
	      if (arr[j] < arr[min])
		{
		  temp = arr[min];
		  arr[min] = arr[j];
		  arr[j] = temp;
		}
	    }

	}
      for (int i = 0; i < n; i++)
	    printf (" %d", arr[i]);
      printf ("\n comparisons = %d", c);
      printf ("\n swaps = %d \n", s);

      t--;
    }
  return 0;
}

