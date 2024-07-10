#include <stdio.h>
#include "x/gge.h"

ggeDice* dice; int a,b;

int main()
{
	dice=new ggeDice(10);b=(*dice).roll();
	while (a!=b){printf("> ");scanf_s("%d", &a);}printf("Yes!\n");
}