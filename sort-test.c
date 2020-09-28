
#include "ece2400-stdlib.h"
#include <stdio.h>
#include <stdlib.h>

void sort( int* x_ptr, int* y_ptr )
{
  if ( (*x_ptr) > (*y_ptr) ) {
    int temp = *x_ptr;
    *x_ptr   = *y_ptr;
    *y_ptr   = temp;
  }
}

void test_case_1_basic()
{
  printf("\n%s\n", __func__  );

  int a = 5;
  int b = 9;
  sort( &a, &b );
  ECE2400_CHECK_INT_EQ( a, 5 );
  ECE2400_CHECK_INT_EQ( b, 9 );

  int c = 7;
  int d = 3;
  sort(&c,&d);
  ECE2400_CHECK_INT_EQ(c,3);
  ECE2400_CHECK_INT_EQ(d,7);
}

int main( int argc, char* argv[] )
{
  __n = ( argc == 1 ) ? 0 : atoi( argv[1] );

  if ( (__n <= 0) || (__n == 1) )
    test_case_1_basic();

  printf( "\n" );
  return __failed;
}

