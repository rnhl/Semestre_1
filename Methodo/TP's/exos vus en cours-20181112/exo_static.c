/****exo_static ******************/

#include <stdio.h>

main()
{
  int j;
  int foo();

  for (j=1; j<=9; j++)
    foo();
  printf("\nNombre d'appels : %d\n", foo());
  return 0;
}

int foo(void)
{
  static int i=0;
  
  i = i + 1;
  return i;
}
