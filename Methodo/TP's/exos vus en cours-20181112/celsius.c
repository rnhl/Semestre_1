#include <stdio.h>

main()
{
  float fahr, celsius;
  int min, max, intervalle;

  min = 0;
  max = 40;
  intervalle = 2;

  printf("Celsius Fahr\n");
  celsius = min;
  
  while (celsius <= max)
    {
      fahr = (9.0 * celsius) / 5.0 +32.0;
      printf("%5.0f %7.1f\n", celsius, fahr);
      celsius = celsius + intervalle;
    }
}
