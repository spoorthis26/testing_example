#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "my_calc.h"

void test_cal(void)
{
  printf("Test calculator using assert:      ");
  assert(calculator(1,5,1)==6);
  assert(calculator(1,-5,3)==-2);
  assert(calculator(1,-5,-3)==-8);
  assert(calculator(1,5,-3)==2);
  assert(calculator(0,5,3)==125);
  assert(calculator(0,-5,3)==0);
  assert(calculator(0,5,-3)==0.008);
  assert(calculator(0,-5,-3)==0);
  printf (" OK\n");
}

int main(void)
{
  test_cal();
}
