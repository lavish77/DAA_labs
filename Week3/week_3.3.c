/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


void merge (int arr[], int l, int m, int r)
{
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;


  int L[n1], R[n2];

  for (i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];


  i = 0;
  j = 0;
  k = l;
  while (i < n1 && j < n2)
    {
      if (L[i] <= R[j])
	{
	  arr[k] = L[i];
	  i++;
	}
      else
	{
	  arr[k] = R[j];
	  j++;
	}
      k++;
    }


  while (i < n1)
    {
      arr[k] = L[i];
      i++;
      k++;
    }


  while (j < n2)
    {
      arr[k] = R[j];
      j++;
      k++;
    }
}


void mergeSort (int arr[], int l, int r)
{
  if (l < r)
    {

      int m = l + (r - l) / 2;


      mergeSort (arr, l, m);
      mergeSort (arr, m + 1, r);

      merge (arr, l, m, r);
    }
}


void printArray (int A[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    printf ("%d ", A[i]);
  printf ("\n");
}

int checkdup (int Arr[], int N)
{
  for (int i = 0; i < N; i++)
    {
      int j = i + 1;
      if (Arr[j] == Arr[i])
	return 1;


      if (j == N)
	{

	  return -1;
	}
    }
}



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

      mergeSort (arr, 0, n - 1);

      int x = checkdup (arr, n);
      if (x == 1)
	printf ("YES \n");
      else
	printf ("NO \n");

      t--;
    }
}
