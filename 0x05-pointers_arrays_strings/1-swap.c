#include "main.h"

/**
  *swap_int - swaps the values of the integers
  *@a: Integer to swap
  *@b: Integer to swap
  */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
