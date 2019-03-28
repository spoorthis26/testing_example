#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "my_calc.h"

void test_cal(void)
{
  printf ("Test calculator using assert:      ");
  assert (calculator(1,5,1)==6);
  assert (max(14,13)==14);
  /* assert (max(INT_MAX,14)==INT_MAX); */
  /* assert (max(INT_MAX,INT_MIN)==INT_MAX); */
  /* assert (max(-23000,INT_MIN)==-23000); */
  printf (" OK\n");
}

int
main(void)
{
  test_max();

  test_mean();
}
