#include <stdio.h>
#include "CUnit/Basic.h"

#include "simple-math.h"


void
test_CALC(void)
{
  printf ("Test calculator using assert:      ");
  CU_ASSERT (calculator(1,5,1)==6);
  CU_ASSERT (calculator(1,5,-3)==2);
  CU_ASSERT (calculator(1,-5,3)==-2);
  CU_ASSERT (calculator(1,-5,-3)==-8);
  CU_ASSERT (calculator(0,5,3)==125);
  CU_ASSERT (calculator(0,5,-3)==0.008);
  CU_ASSERT (calculator(0,-5,3)==0);
  CU_ASSERT (calculator(0,-5,-3)==0);
  printf (" OK\n");
}


int init_suite1(void)
{
  return 0;
}

int clean_suite1(void)
{
  return 0;
}

int
main(void)
{
  CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite("Suite_1", init_suite1, clean_suite1);
   if (NULL == pSuite) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   if ((NULL == CU_add_test(pSuite, "test of max()", test_MAX)) )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* Run all tests using the CUnit Basic interface */
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();
   return CU_get_error();
}
