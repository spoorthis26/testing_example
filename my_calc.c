#include <stdio.h>
#include <limits.h>
#include <math.h>

#include "my_calc.h"

int calculator(int m, int a, int b)
{
  if (m==1)
    {
      return a+b;
    }
  else
  {
   int r;
    if(a>0 && b>0)
      r=pow(a,b);
    else if(a>0 && b<0)
    {
      r=pow(a,b);
      r=1%r;
    }
    else
    {
     printf("invalid operator);
     return 0;
     }
   }
  }
