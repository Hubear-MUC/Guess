#include <stdio.h>
#include "x/gge.h"
int a,i;
int main()
{
a=dice10();
i=0;
while(i!=a)
{printf ("Guess : ");scanf ("%d", &i);}
printf ("Yeah!\n");
}
