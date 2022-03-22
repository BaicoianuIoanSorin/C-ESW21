#include <stdio.h>
#include "myApp.h"
int main()
{
	puts("Hello!");

	printf("%d + %d = %d\n", 4, 5, add(4, 5));
	return 0;
}