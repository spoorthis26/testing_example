#include <stdio.h>
#include <limits.h>
int calculator1(int m, int a, int b)
{
  if (m==1)
    {
      return (a+b);
    }
  else
  {
   int i,r=1;
    if(a>0 && b>0)
    {
       for(i=1;i<=b;i++)
        r=r*a;
    }

    else
    {
     printf(" operator invalid");
     return 0;
    }
    return r;
  }
}
