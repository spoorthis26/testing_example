#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "my_calc.h"

void test_cal(void)
{
  printf("Test calculator using assert:      \n");
  assert(calculator1(1,5,1)==6);
  printf("positive operators in sum,verified!\n");
  assert(calculator1(1,-5,3)==-2);
  printf("negetive-positive operators in sum,verified!\n");
  assert(calculator1(1,-5,-3)==-8);
  printf("negetive-negetive operators in sum,verified!\n");
  assert(calculator1(1,5,-3)==2);
  printf("positive-negetive operators in sum,verified!\n");
  assert(calculator1(0,5,3)==125);
  printf("positive operators in power,verified!\n");
  assert(calculator1(0,-5,3)==0);
  printf("negetive-positive operators in power,verified!\n");
  assert(calculator1(0,5,-3)==0);
  printf("positive-negetive operators in power,verified!\n");
  assert(calculator1(0,-5,-3)==0);
  printf("negetive-negetive operators in power,verified!\n");
  printf (" OK all conditions are tested\n");
}

int main(void)
{
  test_cal();
}
