#include "functions.h"
#include <math.h>

int power(int x, int y)
{
	return pow(x, y);
}

void multiSwap(int x, int y, int z)
{
	int aux = x;
	x = y;
	y = z;
	z = aux;

	printf("%d\t, \t%d\t, \t%d\n after", x, y, z);
}