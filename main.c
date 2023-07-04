#include <stdio.h>

#define SIZE_MATRIX    9

int main(void)
{
  unsigned int a[SIZE_MATRIX][SIZE_MATRIX];
  int i, j, k;

  j = 0;
  k = 1;
  while(k < (SIZE_MATRIX*SIZE_MATRIX + 1))
  {
    int n;

    for(n = j; n < SIZE_MATRIX - 1 - j; ++n)
    {
      a[n][j] = k;
      ++k;
    }

    for(n = j; n < SIZE_MATRIX - 1 - j; ++n)
    {
      a[SIZE_MATRIX - 1 - j][n] = k;
      ++k;
    }
    ////////////////////////////////////////////
    for(n = SIZE_MATRIX - 1 - j; n >= j; --n)
    {
      a[n][SIZE_MATRIX - 1 - j] = k;
      ++k;
    }

    for(n = SIZE_MATRIX - 1 - j; n > (j + 1); --n)
    {
      a[j][n - 1] = k;
      ++k;
    }

    ++j;
  }

  for(j = 0; j < SIZE_MATRIX; ++j)
  {
    for(i = 0; i < SIZE_MATRIX; ++i)
    {
      printf("%4d  ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
