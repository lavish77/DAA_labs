#include <stdio.h>

int main ()
{
  int n, t;

  scanf ("%d", &t);
  while (t > 0)
    {

      scanf ("%d", &n);

      int count = 0;

      int arr[n];


      do
	{
	  scanf ("%d", &arr[count++]);

	}
      while (getchar () != '\n' && count < n);


      int i, key, j, c = 0, s = 0;
      for (i = 1; i < n; i++)
	{
	  key = arr[i];
	  j = i - 1;
	  s++;

	  while (j >= 0 && arr[j] > key)
	    {
	      arr[j + 1] = arr[j];
	      j = j - 1;
	      c++;
	      s++;
	    }
	  arr[j + 1] = key;
	}
      for (int k = 0; k < n; k++)
	    printf (" %d", arr[k]);
      printf ("\n comparisons = %d \n", c);
      printf (" shifts = %d \n", s);
      t--;
    }
}

