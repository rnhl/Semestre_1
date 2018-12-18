#include <stdio.h>

int soustraction(int a, int b)
{
  int compteur_global;
  
  compteur_global = compteur_global + 1;
  return (a - b);
}

int main()
{
  extern int compteur_global;
  int i;           ;
  /*int muet, a, b; */
  for (i=1; i<=5 ; i++)
    /*  muet = addition(a, b);*/
  printf("\nNombre d'appels : %d\n\n", compteur_global);


  for (i=1; i<=5 ; i++)
    /*muet= soustraction (a, b);*/
  printf("\nNombre d'appels : %d\n\n", compteur_global);
  return 0;
}

int compteur_global = 0;
char caractere;

int addition(int a, int b)
{
  extern int compteur_global;

  compteur_global = compteur_global + 1;

  return (a + b);
}
