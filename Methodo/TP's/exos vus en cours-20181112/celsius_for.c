#include <stdio.h>

#define MIN 0
#define MAX 40
#define INTER 2

main()
{
  int celsius;

  printf("Celsius, Fahr\n");

  for (celsius = MIN; celsius <= MAX; celsius = celsius + INTER)   
    printf("%5d %7.1f\n", celsius, ((9.0 * celsius) / 5.0 +32.0));
}
