#include <stdio.h>
int main() {
	int a = 10;
	int *pa = &a;
	*pa += 5;
	printf("%d\n", *pa);
	printf("%d", pa);
}
/* 
the result of pa is another every time, it changes.
pa is the address of the memory
and *pa is the pointer of a/